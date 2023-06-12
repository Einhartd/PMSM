#include "dq_2_alfabeta.h"
#define __BSD_VISIBLE
#include <math.h>

void TransformToABCalc(DQ2ALFABETA *t, float x_d, float x_q, float rad){
	double cos1 = cos(rad);
	double sin1 = sin(rad);
	t->y[0] = cos1 * x_d - sin1 * x_q;
	t->y[1] = sin1 * x_d + cos1 * x_q;
}
