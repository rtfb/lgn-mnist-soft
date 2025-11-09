import numpy as np

d = np.load("tt10-lgn-mnist/src/20250915-070516_binTestAcc9760_seed230646_epochs100_2x4000_b256_lr30_interconnect.npz")

print('char raw_inputs[{}][256] = {{'.format(len(d["input"])))
for image in d["input"]:
    print('\t{\n\t', end='')
    for i, p in enumerate(image):
        print(f"{int(p)},", end='\n\t' if (i+1)&0xf==0 else '')
    print('},')
print('};')
