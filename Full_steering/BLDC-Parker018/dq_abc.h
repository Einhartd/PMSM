#ifndef DQ_ABC_H_
#define DQ_ABC_H_

typedef struct TransformDqTo3ph{
    float y[3];

}DQ2ABC;

void TransformDqToABCCalc(DQ2ABC *t, float d, float q, float rad);

#endif /* DQ_ABC_H_ */
