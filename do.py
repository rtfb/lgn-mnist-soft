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

print('#include <stdio.h>')
print('int main() {')

test_image = 1

print('char inp[256] = {')
for i, p in enumerate(d["input"][test_image]):
    print(f"{int(p)},", end='\n' if (i+1)&0xf==0 else '')
print('};\n')

print('char n[{}];'.format(len(d["gate_types"][0])))
for i, g in enumerate(d["gate_types"][0]):
    A = f"inp[{d['connections.A'][0][i]}]"
    B = f"inp[{d['connections.B'][0][i]}]"
    print(f"n[{i}] = {op(g, A, B)};")
print()

print('char l2[{}];'.format(len(d["gate_types"][0])))
for i, g in enumerate(d["gate_types"][1]):
    A = f"n[{d['connections.A'][1][i]}]"
    B = f"n[{d['connections.B'][1][i]}]"
    print(f"l2[{i}] = {op(g, A, B)};")

print('\nchar known_outputs[{}] = {{'.format(len(d["gate_types"][0])))
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
