
#include <math.h>
#include "stats.h"

float cauchy(float x) {
    return 1.0f / (M_PI * (1 + x * x));
}

float gumbel(float x, float mu, float beta) {
    float z = (x - mu) / beta;
    return (1.0f / beta) * expf(-(z + expf(-z)));
}

float laplace(float x, float mu, float b) {
    return (1.0f / (2.0f * b)) * expf(-fabsf((x - mu) / b));
}
