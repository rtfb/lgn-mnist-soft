#include <stdio.h>

#include "consts.h"

extern int do_inference(char *inp, char *out, int out_sz);
extern int decode_output(char *output_layer);
extern void decode_output_8b(char *output_layer, char *classes_out);

int main(int argc, char **argv) {
    #include "inputs.c"
    char output_layer[OUTL_SIZE];

    if (argc == 1 || (argc == 2 && argv[1][0] == '1')) {
        printf("1-bit.\n");
        for (int i = 0; i < NUM_INPUTS; i++) {
            char *inp = raw_inputs[i];
            do_inference(inp, output_layer, OUTL_SIZE);
            int inferred_class = decode_output(output_layer);
            printf("Input %d: inferred class: %d\n", i, inferred_class);
        }
        return 0;
    }

    if (argc == 2 && argv[1][0] == '8') {
        printf("8-bit.\n");
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

    return 0;
}
