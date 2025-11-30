import numpy as np

DEBUG = False
DEBUG_NP = False

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")

if DEBUG_NP:
    print(d.keys())
    print(d["gate_types"].shape)
    print(d["input"].shape)
    print(d["output"].shape)
    print(d["connections.A"].shape)

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

def do_layer1(data, layer_name, layer_idx, input_layer):
    print('\tunsigned char {}[{}] = {{'.format(layer_name, layer_size))
    for i, g in enumerate(data['gate_types'][layer_idx]):
        conn_A = data['connections.A'][layer_idx][i]
        conn_B = data['connections.B'][layer_idx][i]
        A = f'{input_layer}[{conn_A}]'
        B = f'{input_layer}[{conn_B}]'
        print(f'\t{op(g, A, B)},')
    print('\t};')
    print()

def do_layer2(data, layer_name, layer_idx, input_layer):
    for i, g in enumerate(data['gate_types'][layer_idx]):
        conn_A = data['connections.A'][layer_idx][i]
        conn_B = data['connections.B'][layer_idx][i]
        A = f'{input_layer}[{conn_A}]'
        B = f'{input_layer}[{conn_B}]'
        print(f'\t{layer_name}[{i}] = {op(g, A, B)};')
        if i >= 2549:
            break
    print()

print('int do_inference(unsigned char *inp, unsigned char *out, int out_sz) {')
do_layer1(d, 'l1', 0, 'inp')
do_layer2(d, 'out', 1, 'l1')
print('}')

if DEBUG:
    print('\nchar known_outputs[{}] = {{'.format(layer_size))
    ti = d['output'][test_image]
    for i, g in enumerate(ti):
        print(f"{int(ti[i])},", end='\n' if (i+1)&0xf==0 else '')
    print('};')

if DEBUG:
    print('''
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
