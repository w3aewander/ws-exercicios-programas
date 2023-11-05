#include <iostream>
#include <cstring>

#include "main.hpp"

using namespace std;

int main(int argc, char **argv)
{

    Conversor *conversor = new Conversor();

    if (argv[1] && argv[2])
    {
        float t = atof(argv[2]);

        if ( strcmp(argv[1], "C-F") == 0)
        {
            cout << t << "°C -> " << conversor->CtoF(t) << "°F" << endl;
        }
        else if (strcmp(argv[1], "F-C") == 0)
        {
            cout << t << "°F -> " << conversor->FtoC(t) << "°C" << endl;
        }

    }
    else
    {
            cout << "Você deve informar: " << endl;
            cout << "C-F  10.0 (temperatura) para converter Celsius para Farenheit " << endl;
            cout << "F-C  50.0 (temperatura) para converter Farenheit para Celsius." << endl;
    }

    return 0;
}