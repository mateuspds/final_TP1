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
    codigo.setValor("79927398713");

    Email email;
    email.setNomeemsil("mateus.silva09082000@gmail.com");




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

    //teste de Idioma
      TUIdioma tuidioma;
    switch(tuidioma.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - Idioma" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA   - Idioma" << endl;
                                break;
    }

       //teste de Data
      TUData tudata;
    switch(tudata.run()){
        case TUData::SUCESSO: cout << "SUCESSO - Data" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - Data" << endl;
                                break;
    }


       //teste de Descricao
      TUDescricao tudes;
    switch(tudes.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - Descrição" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - Descrição" << endl;
                                break;
    }

        //teste de senha
      TUSenha tusenha;
    switch(tusenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - Senha" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - Senha" << endl;
                                break;
    }

        //teste de Email
      TUEmail tuemail;
    switch(tuemail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - Email" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - Email" << endl;
                                break;
    }

         //teste de Codigo
      TUCodigo tucodigo;
    switch(tucodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - Codigo" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - Codigo" << endl;
                                break;
    }

    return 0;





}
