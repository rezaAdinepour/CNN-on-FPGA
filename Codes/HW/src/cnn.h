#pragma once

#include "Headers/definitions.h"

// Get a prediction in output.
// Take an image in input.
void cnn(float img_in[IMG_ROWS][IMG_COLS], float pred[DIGITS]);
