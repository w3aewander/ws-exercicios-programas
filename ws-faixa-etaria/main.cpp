#include <iostream>

#include "main.hpp"

using namespace std;


int main()
{

    int idade = 0;

    cout << "Cálculo da faixa etária:" << endl;
    cout << "========================" << endl;

    cout << "Informe a idade: ";
    cin >> idade;

    cout << retornaFaixaEtaria(idade) << endl;

    cout << "=======================" << endl;

    return 0;
}