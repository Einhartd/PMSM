#include "modulator.h"

void modCalc(mod *md, float a, float b, float c )
{
    float max = a;
    float min = a;

    if(b > max){max = b;}
    if(b <min){min = b;}
    if(c > max){max = c;}
    if(c <min){min = c;}

    float sumka = (min + max) * (-0.5);

    md->y[0] = (a + sumka);
    md->y[1] = (b + sumka);
    md->y[2] = (c + sumka);

}

