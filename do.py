import numpy as np

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")
# print(d["gate_types"].shape)
# print(d["input"].shape)
# print(d["output"].shape)
# print(d["connections.A"].shape)
# print(max(d["connections.A"][0]))
# print(max(d["connections.B"][0]))
# print(max(d["gate_types"][0]))

def op(gate_type, A, B):
    return [
        f"0",
        f"{A} & {B}",
        f"{A} & !{B}",
        f"{A}",
        f"{B} & !{A}",
        f"{B}",
        f"{A} ^ {B}",
        f"{A} | {B}",
        f"!({A} | {B})",
        f"!({A} ^ {B})",
        f"!{B}",
        f"!{B} | ({A} & {B})",
        f"!{A}",
        f"!{A} | ({A} & {B})",
        f"!({A} & {B})",
        f"1"
    ][gate_type]

layer_size = len(d["gate_types"][0])
test_image = 1

print('#include <stdio.h>')
print('')
print('int main() {')
print('\t#include "inputs.c"')

print('\tchar *inp = raw_inputs[{}];'.format(test_image))
print('')

print('char l1[{}];'.format(layer_size))
for i, g in enumerate(d["gate_types"][0]):
    A = f"inp[{d['connections.A'][0][i]}]"
    B = f"inp[{d['connections.B'][0][i]}]"
    print(f"l1[{i}] = {op(g, A, B)};")
print()

print('char l2[{}];'.format(layer_size))
for i, g in enumerate(d["gate_types"][1]):
    A = f"l1[{d['connections.A'][1][i]}]"
    B = f"l1[{d['connections.B'][1][i]}]"
    print(f"l2[{i}] = {op(g, A, B)};")

print('\nchar known_outputs[{}] = {{'.format(layer_size))
ti = d['output'][test_image]
for i, g in enumerate(ti):
    print(f"{int(ti[i])},", end='\n' if (i+1)&0xf==0 else '')
print('};')

# print('for (int i = 0; i<2550; i++) {')
# print('    printf("%d\\n", l2[i]);')
# print('}')
print('''
for (int class = 0; class < 10; class++) {
    int sum = 0;
    for (int i = 0; i < 255; i++) {
        sum += l2[class*255+i];
    }
    printf("%d\\n", sum);
}

for (int i = 0; i < 2550; i++ ) {
    if (l2[i] != known_outputs[i]) {
        printf("Mismatch at %d: got %d, expected %d\\n", i, l2[i], known_outputs[i]);
    }
}

for (int i = 0; i < 2550; i++ ) {
    printf("%d", l2[i]);
}
printf("\\n");
''')
print('return 0;\n}')
