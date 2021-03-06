#pragma once

#include <complex.h>

typedef struct
{
    struct input_t *input;
    float complex *buffer;
    float *phases;
    uint8_t *ref_buf;
    unsigned int idx;
    int ready;
} sync_t;

void sync_push(sync_t *st, float complex *fft);
void sync_init(sync_t *st, struct input_t *input);
