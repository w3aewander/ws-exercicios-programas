#ifndef H_CONV_TEMP
#define H_CONV_TEMP

class Conversor
{
    public:
        float CtoF(float c);
        float FtoC(float f);
        Conversor();
};


Conversor::Conversor(){}

float Conversor::CtoF(float c)
{
    return ( (1.8 * c) + 32  );
    
}

float Conversor::FtoC(float f)
{
    return ( f - 32 )/ 1.8;
}

#endif