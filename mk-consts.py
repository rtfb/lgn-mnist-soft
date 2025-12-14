import sys

NUM_INPUTS = 100_032  # multiple of 64

if len(sys.argv) > 1 and sys.argv[1] == 'small':
    NUM_INPUTS = 1024

NUM_8B_INPUTS = NUM_INPUTS // 8
NUM_16B_INPUTS = NUM_8B_INPUTS // 2
NUM_32B_INPUTS = NUM_16B_INPUTS // 2
NUM_64B_INPUTS = NUM_32B_INPUTS // 2

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
