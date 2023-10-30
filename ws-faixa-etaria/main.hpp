#include <iostream>

std::string retornaFaixaEtaria(int idade)
{

    std::string faixaEtaria = "";
    
    if ( idade <= 0 || idade > 120) 
    {
        return "A idade deve estar entre 1 e 120";
    }
    
    if ( idade > 0 && idade <= 12 )
    {
        faixaEtaria = "criança";
    }
    else if ( idade > 12 && idade < 18)
    {
        faixaEtaria = "adolescente";
    }
    else if ( idade >= 18 && idade < 60)
    {
        faixaEtaria = "adulto";
 
    } else {
 
        faixaEtaria = "idoso";
    }

    return faixaEtaria;
}