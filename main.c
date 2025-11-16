#include <stdio.h>

#include "consts.h"

extern int do_inference(char *inp, char *out, int out_sz);
extern int decode_output(char *output_layer);

int main() {
    #include "inputs.c"

    char output_layer[OUTL_SIZE];

    for (int i = 0; i < NUM_INPUTS; i++) {
        char *inp = raw_inputs[i];
        do_inference(inp, output_layer, OUTL_SIZE);
        int inferred_class = decode_output(output_layer);
        printf("Input %d: inferred class: %d\n", i, inferred_class);
    }
    return 0;
}
