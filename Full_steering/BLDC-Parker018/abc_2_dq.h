/*
 * abc_2_dq.h
 *
 *  Created on: 25 maj 2023
 *      Author: student
 */

#ifndef ABC_2_DQ_H_
#define ABC_2_DQ_H_

typedef struct Transform3phToDq{
    float y[2];

}ABC2DQ;

void TransABCToDQCalc(ABC2DQ *t, float x_a, float x_b, float x_c, float rad);

#endif /* ABC_2_DQ_H_ */
