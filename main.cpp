#include <iostream>
#include "dominios.h"
#include "tuDominios.h"
using namespace std;

int main()
{

    Pais nomepais;
    nomepais.setValor("Brasil");

    Cidade cidade;
    cidade.setValor("Paris");

    Idioma idioma;
    idioma.setLingua("Portugues");

    Nota nota;
    nota.setValor(10);

    Descricao descri;
    descri.setDes("asdf");

    Nome nome;
    nome.setNome("Mateus Pereira");

    Senha senha;
    senha.setNome_senha("r!2");

    Data data;
    data.setData_nome("03/Fev");

    Codigo codigo;
    codigo.setValor("7992739871145");



       TUCidade testeA;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(testeA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - Cidade" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - Cidade" << endl;
                                break;
    }

     TUNota teste;
    switch(teste.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - Nota" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - Nota" << endl;
                                break;
    }


//teste de Nome
   TUNome testeq;
    switch(testeq.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - Nome" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - Nome" << endl;
                                break;
    }

    //teste de Pais

     TUPais tupaisw;
    switch(tupaisw.run()){
        case TUPais::SUCESSO: cout << "SUCESSO - Pais" << endl;
                                break;
        case TUPais::FALHA  : cout << "FALHA   - Pais" << endl;
                                break;
    }



    return 0;





}
