/*
 * enkoder.c
 *
 *  Created on: 29 maj 2023
 *      Author: student
 */

#include "enkoder.h"
#define __BSD_VISIBLE
#include <math.h>

void SpeedCalcInit(Enk *t, float samplingTime){
    t->curDeg = 0.0;
    t->prevDeg = 0.0;
    t->speed = 0.0;
    t->deltaDeg = 0.0;
    t->outputSpeed = 0.0;
    t->prevOutputSpeed = 0.0;
    t->samplingTime = samplingTime;
    t->OneOverTs = 1/samplingTime;
    t->flag = 0;
}


void SpeedCalc(Enk *t, float Deg){

    if (t->flag == 0){
        t->prevDeg = M_PI;
        t->flag = 1;
    }

    t->curDeg = Deg + M_PI;
    t->deltaDeg = t->curDeg - t->prevDeg;
    if(t->deltaDeg < -M_PI){
        t->deltaDeg += 2 * M_PI;
    }
    else if(t->deltaDeg > M_PI){
        t->deltaDeg -= 2 * M_PI;
    }
    else{
    }
    t->speed = t->deltaDeg * t->OneOverTs;

    //LPF
    t->outputSpeed = 0.09090909 * t->speed + 0.9090909 * t->prevOutputSpeed;

    //przypisanie prev
    t->prevDeg = t->curDeg;
    t->prevOutputSpeed = t->outputSpeed;
}
