#include <iostream>
#include "dominios.h"
#include "tuDominios.h"
#include "TuEntidade.h"
using namespace std;

int main()
{
//matricula: 190035145




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


cout << "--------------------------------------------------------------------" << endl;
    //teste de entidades

       TUUsuario testeB;

    switch(testeB.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - Usuario" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - Usuario" << endl;
                                break;
    }


      TUHospedagem testehosp;

    switch(testehosp.run()){
        case TUHospedagem::SUCESSO: cout << "SUCESSO - Hospedagem" << endl;
                                break;
        case TUHospedagem::FALHA  : cout << "FALHA   - Hospedagem" << endl;
                                break;
    }

     TUAvalicao testeavali;

    switch(testeavali.run()){
        case TUAvalicao::SUCESSO: cout << "SUCESSO - Avaliação" << endl;
                                break;
        case TUAvalicao::FALHA  : cout << "FALHA   - Avaliação" << endl;
                                break;
    }


    return 0;





}
