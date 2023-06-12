#include "alfabeta_2_abc.h"
#define __BSD_VISIBLE
#include <math.h>

void AlphaBetaToABCCalc(ALFABETA2ABC *t, float x_alfa, float x_beta){
	t->x_abc[0] = x_alfa;
	t->x_abc[1] = -(1.0/2.0) * x_alfa + (1.73205/2.0) * x_beta;
	t->x_abc[2] = -(1.0/2.0) * x_alfa + (-1.73205/2.0) * x_beta;
}
