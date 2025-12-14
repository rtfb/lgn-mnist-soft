import numpy as np
import random
import sys

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")
inputs = d['input']   # shape = (NUM_8B_INPUTS*8, 256)

N = inputs.shape[0]
NUM_INPUTS = 100_032  # multiple of 64

if len(sys.argv) > 1 and sys.argv[1] == 'small':
    NUM_INPUTS = 1024

print('#include <stdint.h>\n')
print('#include "consts.h"\n')

random.seed(666)
c = random.choices(range(N), k=NUM_INPUTS)

print('uint8_t raw_inputs[NUM_INPUTS][256] = {')
for i in c:
    image = inputs[i]
    print('\t{\n\t', end='')
    for i, p in enumerate(image):
        print(f"{int(p)},", end='\n\t' if (i+1)&0xf==0 else '')
    print('},')
print('};')
