#include "dq_abc.h"
#define __BSD_VISIBLE
#include <math.h>

void TransformDqToABCCalc(DQ2ABC *t, float d, float q, float rad){
    float cos1 = cos(rad);
    float cos2 = cos(rad - 0.6666666666 * M_PI);
    float cos3 = cos(rad + 0.6666666666 * M_PI);
    float sin1 = sin(rad);
    float sin2 = sin(rad - 0.6666666666 * M_PI);
    float sin3 = sin(rad + 0.6666666666 * M_PI);

    t->y[0] = cos1 * d - sin1 * q;
    t->y[1] = d * cos2 - q * sin2;
    t->y[2] = d * cos3 - q * sin3;
}


