#include <stdio.h>

#include "consts.h"

extern int do_inference(char *inp, char *out, int out_sz);
extern int decode_output(char *output_layer);
extern void decode_output_8b(char *output_layer, char *classes_out);

unsigned long startTime = 0;
    char output_layer[OUTL_SIZE];
    char inferred_classes[8] = {0};

//    #include "inputs.c"
#define NUM_8B_INPUTS 16
extern char *packed_inputs[NUM_8B_INPUTS];

void setup() {
    Serial.begin(9600);
    Serial.println("setup");
}

void loop() {
    startTime = millis();
    for (int i = 0; i < NUM_8B_INPUTS; i++) {
        char *inp = packed_inputs[i];
        do_inference(inp, output_layer, OUTL_SIZE);
        decode_output_8b(output_layer, inferred_classes);
        /*
        for (int j = 0; j < 8; j++) {
            Serial.print(i*8+j);
            Serial.print(" - ");
            Serial.println('0' + inferred_classes[j]);
        }
        */
    }
    Serial.println("Total inference time:");
    Serial.println(millis() - startTime);
}
