#ifndef H_CALCULO_IMC
#define H_CALCULO_IMC

#include <math.h>

class IMC
{
public:
    float peso = 0.00f;
    float altura = 0.00f;
    float getIMC();
};

float IMC::getIMC(){
    return peso / pow(altura,2);
}

#endif