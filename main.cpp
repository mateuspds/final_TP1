#include <iostream>
#include "dominios.h"
#include "tuDominios.h"
#include "TuEntidade.h"
using namespace std;
//matricula: 190035145

// A função main é responsável por todo o controle do código, nessa main, rodamos todos os testes para cada tipo de classe e método.
int main()
{
        //Invoca o testeA em TUCidade
       TUCidade testeA;

    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(testeA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - Cidade" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - Cidade" << endl;
                                break;
    }
      //Invoca o teste em TUNota
     TUNota teste;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(teste.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - Nota" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - Nota" << endl;
                                break;
    }


      //Invoca o testeq em TUNome
   TUNome testeq;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(testeq.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - Nome" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - Nome" << endl;
                                break;
    }
      //Invoca o tupaisw em TUPais
     TUPais tupaisw;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tupaisw.run()){
        case TUPais::SUCESSO: cout << "SUCESSO - Pais" << endl;
                                break;
        case TUPais::FALHA  : cout << "FALHA   - Pais" << endl;
                                break;
    }

      //Invoca o tuidioma em TUIdioma
      TUIdioma tuidioma;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tuidioma.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - Idioma" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA   - Idioma" << endl;
                                break;
    }

      //Invoca o tudata em TUData
      TUData tudata;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tudata.run()){
        case TUData::SUCESSO: cout << "SUCESSO - Data" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - Data" << endl;
                                break;
    }


      //Invoca o tudes em TUDescricao
      TUDescricao tudes;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tudes.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - Descrição" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - Descrição" << endl;
                                break;
    }

      //Invoca o tusenha em TUSenha
      TUSenha tusenha;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tusenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - Senha" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - Senha" << endl;
                                break;
    }

      //Invoca o tuemail em TUEmail
      TUEmail tuemail;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tuemail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - Email" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - Email" << endl;
                                break;
    }

      //Invoca o tucodigo em TUCodigo
      TUCodigo tucodigo;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(tucodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - Codigo" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - Codigo" << endl;
                                break;
    }


cout << "--------------------------------------------------------------------" << endl;

      //Invoca o testeB em TUUsuario
       TUUsuario testeB;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(testeB.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - Usuario" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - Usuario" << endl;
                                break;
    }

      //Invoca o testehosp em TUHospedagem
      TUHospedagem testehosp;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(testehosp.run()){
        case TUHospedagem::SUCESSO: cout << "SUCESSO - Hospedagem" << endl;
                                break;
        case TUHospedagem::FALHA  : cout << "FALHA   - Hospedagem" << endl;
                                break;
    }
    
      //Invoca o testeavali em TUAvaliacao
     TUAvalicao testeavali;
    // Invocar método e apresentar mensagem acerca do resultado do teste.
    switch(testeavali.run()){
        case TUAvalicao::SUCESSO: cout << "SUCESSO - Avaliação" << endl;
                                break;
        case TUAvalicao::FALHA  : cout << "FALHA   - Avaliação" << endl;
                                break;
    }
    return 0;
}
