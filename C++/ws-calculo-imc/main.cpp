#include <iostream>
#include "main.hpp"

using namespace std;

int main(){

    //define a precisão e casas decimais
    cout.setf(ios::fixed);
    cout.precision(2);

    IMC *imc = new IMC();
    cout << "Informe a altura: ";
    cin >> imc->altura ;

    cout << "Informe o peso:";
    cin >> imc->peso;

    float  res = imc->getIMC();

    cout << "De acordo com as suas informações seu IMC é:" << res << endl;

    return 0;
}