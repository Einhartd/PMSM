/*
 * enkoder.h
 *
 *  Created on: 29 maj 2023
 *      Author: student
 */

#ifndef ENKODER_H_
#define ENKODER_H_

typedef struct Enkoder{
    float curDeg;
    float prevDeg;
    float speed;
    float deltaDeg;
    float samplingTime;
    float OneOverTs;
    float outputSpeed;
    float prevOutputSpeed;
    int flag;
}Enk;

void SpeedCalcInit(Enk *t, float samplingTime);

void SpeedCalc(Enk *t, float Deg);

#endif /* ENKODER_H_ */
