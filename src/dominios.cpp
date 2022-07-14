 #include "dominios.h"
 #include<string>
 #include <list>
 #include <iostream>
 #include <cstring>
 using namespace std;

void Pais::validar(string nomedoPais){

    int numpais = 0;

    try{
    std::list<string> mypaises = {"Estados Unidos", "Brasil", "China","Coreia do Sul", "Emirados", "Franca", "India", "Japao", "Malasia",
    "Reino Unido", "Tailandia", "Turquia"};
    for(string x : mypaises){
        if(nomedoPais == x){
            numpais = ++numpais;
            break;
        }
    }
   if(numpais <= 0)
        throw std::invalid_argument("Argumento invalido em Pais.");
}catch(...){
    throw std::invalid_argument("tipo de argumento invalido Pais");
}


}
void Pais::setValor(string nome){
    validar(nome);
    this->nomePais = nome;
}

//implementaçao do metodo validar de Cidade

void Cidade::validar(string nome){

    int numCidade = 0;

    try{
    std::list<string> mypaises = {"Antalya", "Bangkok", "Delhi","Dubai", "Hong Hong", "Londres", "Macau", "Mumbai", "Paris",
    "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul","Kuala Lampur", "Nova Iorque","Osaka",
     "Phuket", "Shenzhen", "Toquio"};
    for(string x : mypaises){
        if(nome == x){
            numCidade = ++numCidade;
            break;
        }
    }
   if(numCidade <= 0)
        throw std::invalid_argument("Argumento invalido em Cidade.");
    }
    catch(...){
        throw std::invalid_argument("tipo de argumento invalido em Cidade");
    }
}
void Cidade::setValor(string nome){
    validar(nome);
    this->nomeCidade = nome;
}

//imolementação do metodo de validação de Idioma

void Idioma::validar( string lingue){
    int numerocidade = 0;
    std::list<string> myidiomas = {"Ingles","Chines","Mandarim","Hindi","Espanhol",
    "Frances","Arabe","Bengali","Russo","Portugues","Indonesio"};

    try{
        for(string x : myidiomas){
            if(lingue == x){
                numerocidade = ++numerocidade;
                break;
            }
        }
        if(numerocidade <= 0)
            throw std::invalid_argument("tipo de argumento invalido em Idioma");
        }catch(...){
            throw std::invalid_argument("tipo de argumento invalido em Idioma");
        }
}

void Idioma::setLingua(string idioma){
    validar(idioma);
    this->lingua = idioma;
}
