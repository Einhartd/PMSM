#include "abc_2_dq.h"
#define __BSD_VISIBLE
#include <math.h>


void TransABCToDQCalc(ABC2DQ *t, float x_a, float x_b, float x_c, float rad){
    double cos1 = cos(rad);
    double cos2 = cos(rad - 0.6666666*M_PI);
    double cos3 = cos(rad + 0.6666666*M_PI);
    double sin1 = sin(rad);
    double sin2 = sin(rad - 0.6666666*M_PI);
    double sin3 = sin(rad + 0.6666666*M_PI);

    t->y[0] = cos1 * x_a + cos2 * x_b + cos3 * x_c;
    t->y[1] = (-sin1 * x_a) + (-sin2 * x_b) + (-sin3 * x_c);
    t->y[0] = t->y[0] * 0.6666666;        //d
    t->y[1] = t->y[1] * 0.6666666;        //q
};
