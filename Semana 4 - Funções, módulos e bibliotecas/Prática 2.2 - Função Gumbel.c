#include <math.h>

float gumbel(float x, float mu, float beta) {
    float z = (x - mu) / beta;
    return (1.0f / beta) * expf(-(z + expf(-z)));
}
