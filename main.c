#include <stdint.h>
#include <stdio.h>

#include "consts.h"

extern int do_inference_8b(uint8_t *inp, uint8_t *out, int out_sz);
extern int do_inference_16b(uint16_t *inp, uint16_t *out, int out_sz);
extern int do_inference_32b(uint32_t *inp, uint32_t *out, int out_sz);
extern int do_inference_64b(uint64_t *inp, uint64_t *out, int out_sz);
extern int do_inference1b(char *inp, char *out, int out_sz);
extern int decode_output(char *output_layer);
extern void decode_output_8b(uint8_t *output_layer, uint8_t *classes_out);
extern void decode_output_16b(uint16_t *output_layer, uint8_t *classes_out);
extern void decode_output_32b(uint32_t *output_layer, uint8_t *classes_out);
extern void decode_output_64b(uint64_t *output_layer, uint8_t *classes_out);
extern void pack8(uint8_t inp[NUM_INPUTS][256], int out_width, uint8_t out[NUM_8B_INPUTS][256]);
extern void pack16(uint8_t inp[NUM_INPUTS][256], int out_width, uint16_t out[NUM_16B_INPUTS][256]);
extern void pack32(uint8_t inp[NUM_INPUTS][256], int out_width, uint32_t out[NUM_32B_INPUTS][256]);
extern void pack64(uint8_t inp[NUM_INPUTS][256], int out_width, uint64_t out[NUM_64B_INPUTS][256]);

extern uint8_t raw_inputs[NUM_INPUTS][256];

int main(int argc, char **argv) {

    if (argc == 1 || (argc == 2 && argv[1][0] == '1' && argv[1][1] == '\0')) {
        uint8_t output_layer[OUTL_SIZE] = {0};
        printf("1-bit.\n");
        for (int i = 0; i < NUM_INPUTS; i++) {
            char *inp = raw_inputs[i];
            do_inference1b(inp, output_layer, OUTL_SIZE);
            int inferred_class = decode_output(output_layer);
            printf("Input %d: inferred class: %d\n", i, inferred_class);
        }
        return 0;
    }

    if (argc == 2 && argv[1][0] == '8') {
        uint8_t output_layer[OUTL_SIZE] = {0};
        printf("8-bit.\n");
        uint8_t packed[NUM_8B_INPUTS][256] = {0};
        pack8(raw_inputs, 8, packed);
        uint8_t inferred_classes[8] = {0};
        for (int i = 0; i < NUM_8B_INPUTS; i++) {
            uint8_t *inp = packed[i];
            do_inference_8b(inp, output_layer, OUTL_SIZE);
            decode_output_8b(output_layer, inferred_classes);
            for (int j = 0; j < 8; j++) {
                printf("Input %d: inferred class: %d\n", i*8+j, inferred_classes[j]);
            }
        }
        return 0;
    }

    if (argc == 2 && argv[1][0] == '1' && argv[1][1] == '6') {
        uint16_t output_layer[OUTL_SIZE] = {0};
        printf("16-bit.\n");
        uint16_t packed[NUM_16B_INPUTS][256] = {0};
        pack16(raw_inputs, 16, packed);
        uint8_t inferred_classes[16] = {0};
        for (int i = 0; i < NUM_16B_INPUTS; i++) {
            uint16_t *inp = packed[i];
            do_inference_16b(inp, output_layer, OUTL_SIZE);
            decode_output_16b(output_layer, inferred_classes);
            for (int j = 0; j < 16; j++) {
                printf("Input %d: inferred class: %d\n", i*16+j, inferred_classes[j]);
            }
        }
        return 0;
    }

    if (argc == 2 && argv[1][0] == '3' && argv[1][1] == '2') {
        uint32_t output_layer[OUTL_SIZE] = {0};
        printf("32-bit.\n");
        uint32_t packed[NUM_32B_INPUTS][256] = {0};
        pack32(raw_inputs, 32, packed);
        uint8_t inferred_classes[32] = {0};
        for (int i = 0; i < NUM_32B_INPUTS; i++) {
            uint32_t *inp = packed[i];
            do_inference_32b(inp, output_layer, OUTL_SIZE);
            decode_output_32b(output_layer, inferred_classes);
            for (int j = 0; j < 32; j++) {
                printf("Input %d: inferred class: %d\n", i*32+j, inferred_classes[j]);
            }
        }
        return 0;
    }

    if (argc == 2 && argv[1][0] == '6' && argv[1][1] == '4') {
        uint64_t output_layer[OUTL_SIZE] = {0};
        printf("64-bit.\n");
        uint64_t packed[NUM_64B_INPUTS][256] = {0};
        pack64(raw_inputs, 64, packed);
        uint8_t inferred_classes[64] = {0};
        for (int i = 0; i < NUM_64B_INPUTS; i++) {
            uint64_t *inp = packed[i];
            do_inference_64b(inp, output_layer, OUTL_SIZE);
            decode_output_64b(output_layer, inferred_classes);
            for (int j = 0; j < 64; j++) {
                printf("Input %d: inferred class: %d\n", i*64+j, inferred_classes[j]);
            }
        }
        return 0;
    }

    return 0;
}
