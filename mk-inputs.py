import numpy as np

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")
inputs = d['input']   # shape = (NUM_8B_INPUTS*8, 256)

NUM_INPUTS = len(inputs)
NUM_8B_INPUTS = inputs.shape[0] // 8

print('#define NUM_INPUTS {}\n'.format(NUM_INPUTS))
print('#define NUM_8B_INPUTS {}\n'.format(NUM_8B_INPUTS))

print('char raw_inputs[NUM_INPUTS][256] = {')
for image in inputs:
    print('\t{\n\t', end='')
    for i, p in enumerate(image):
        print(f"{int(p)},", end='\n\t' if (i+1)&0xf==0 else '')
    print('},')
print('};')

# Reshape into blocks of 8 one-bit images
# shape: (NUM_8B_INPUTS, 8, 256)
blocks = inputs.reshape(NUM_8B_INPUTS, 8, 256)

# Compute bit weights: [1,2,4,8,16,32,64,128]
bit_weights = (1 << np.arange(8, dtype=np.uint8)).reshape(1, 8, 1)

# Vectorized bit packing:
# Multiply bits by weights and sum → shape (NUM_8B_INPUTS, 256)
packed = np.sum(blocks * bit_weights, axis=1).astype(np.uint8)


print("\nchar packed_inputs[NUM_8B_INPUTS][256] = {")
for row in packed:
    print("\t{")
    # Format 16 per line just like your original script
    for i in range(0, 256, 16):
        chunk = ",".join(str(v) for v in row[i:i+16])
        print(f"\t{chunk},")
    print("\t},")
print("};")
