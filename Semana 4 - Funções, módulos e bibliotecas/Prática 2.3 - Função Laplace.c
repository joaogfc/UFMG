#include <math.h>

float laplace(float x, float mu, float b) {
    return (1.0f / (2.0f * b)) * expf(-fabsf(x - mu) / b);
}
