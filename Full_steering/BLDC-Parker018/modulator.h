/*
 * modulator.h
 *
 *  Created on: 22 maj 2023
 *      Author: student
 */

#ifndef MODULATOR_H_
#define MODULATOR_H_

typedef struct modulator{
    float y[3];
}mod;


void modCalc(mod *md, float a, float b, float c);

#endif /* MODULATOR_H_ */
