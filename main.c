#include <stdio.h>

#include "consts.h"

extern int do_inference(char *inp, char *out, int out_sz);
extern int decode_output(char *output_layer);
extern void decode_output_8b(char *output_layer, char *classes_out);

int main() {
    #include "inputs.c"

    char output_layer[OUTL_SIZE];
    char inferred_classes[8] = {0};

    for (int i = 0; i < NUM_8B_INPUTS; i++) {
        char *inp = packed_inputs[i];
        do_inference(inp, output_layer, OUTL_SIZE);
        decode_output_8b(output_layer, inferred_classes);
        for (int j = 0; j < 8; j++) {
            printf("Input %d: inferred class: %d\n", i*8+j, inferred_classes[j]);
        }
    }
    return 0;
}
