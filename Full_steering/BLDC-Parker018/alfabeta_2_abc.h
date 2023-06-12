#ifndef AFLABETA_2_ABC_H_
#define AFLABETA_2_ABC_H_

typedef struct AlphaBetaTo3ph{
	float x_abc[3];
}ALFABETA2ABC;

void AlphaBetaToABCCalc(ALFABETA2ABC *t, float x_alfa, float x_beta);

#endif

