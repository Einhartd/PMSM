#ifndef DQ_2_AFLABETA_H_
#define DQ_2_AFLABETA_H_

typedef struct TransformDQ2AlfaBeta{
	float y[2];

}DQ2ALFABETA;

void TransformToABCalc(DQ2ALFABETA *t, float x_d, float x_q, float rad);

#endif
