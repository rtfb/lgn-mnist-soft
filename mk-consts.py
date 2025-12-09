import numpy as np

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")
inputs = d['input']   # shape = (NUM_8B_INPUTS*8, 256)

NUM_64B_INPUTS = inputs.shape[0] // 64
NUM_32B_INPUTS = NUM_64B_INPUTS * 2
NUM_16B_INPUTS = NUM_32B_INPUTS * 2
NUM_8B_INPUTS = NUM_16B_INPUTS * 2
NUM_INPUTS = NUM_8B_INPUTS * 8

print('#ifndef _CONSTS_H_')
print('#define _CONSTS_H_\n')

print('#define NUM_INPUTS {}'.format(NUM_INPUTS))
print('#define NUM_8B_INPUTS {}'.format(NUM_8B_INPUTS))
print('#define NUM_16B_INPUTS {}'.format(NUM_16B_INPUTS))
print('#define NUM_32B_INPUTS {}'.format(NUM_32B_INPUTS))
print('#define NUM_64B_INPUTS {}'.format(NUM_64B_INPUTS))

print()
print('#define NUM_CLASSES 10')
print('#define BITS_PER_CLASS 255')
print('#define OUTL_SIZE (BITS_PER_CLASS * NUM_CLASSES)')

print('\n#endif // _CONSTS_H_')
