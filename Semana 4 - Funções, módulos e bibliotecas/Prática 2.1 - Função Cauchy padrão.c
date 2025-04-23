#include <math.h>

float cauchy(float x) {
    return 1.0f / (M_PI * (1.0f + x * x));
}
