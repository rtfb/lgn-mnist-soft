import numpy as np

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")
inputs = d['input']   # shape = (NUM_8B_INPUTS*8, 256)

NUM_64B_INPUTS = inputs.shape[0] // 64
NUM_32B_INPUTS = NUM_64B_INPUTS * 2
NUM_16B_INPUTS = NUM_32B_INPUTS * 2
NUM_8B_INPUTS = NUM_16B_INPUTS * 2
NUM_INPUTS = NUM_8B_INPUTS * 8

print('#include "consts.h"\n')

print('uint8_t raw_inputs[NUM_INPUTS][256] = {')
for image in inputs[:NUM_INPUTS]:
    print('\t{\n\t', end='')
    for i, p in enumerate(image):
        print(f"{int(p)},", end='\n\t' if (i+1)&0xf==0 else '')
    print('},')
print('};')
