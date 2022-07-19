#include "tuDominios.h"
#include <stdexcept>

//matricula: 190035145

//A função TUCidade::setUp define a nova cidade e estado como SUCESSO.
void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
}

//A função TUCidade::tearDown deleta a cidade salva.
void TUCidade::tearDown(){
    delete cidade;
}

//A função TUCidade::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setValor(VALOR_VALIDO);
        if (cidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUCidade::testarCenarioFalha() faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUCidade::testarCenarioFalha(){
    try{
        cidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (cidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUCidade::run chama todas as funções anteriores de TUCidade e retorna a variavel estado.
int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUNota::setUp define a nova nota e estado como SUCESSO.
void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

//A função TUNota::tearDown deleta a nota salva.
void TUNota::tearDown(){
    delete nota;
}

//A função TUNota::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUNota::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUNota::run chama todas as funções anteriores de TUNota e retorna a variavel estado.
int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUNome::setUp define o novo nome e estado como SUCESSO.
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

//A função TUNome::tearDown deleta o nome salvo.
void TUNome::tearDown(){
    delete nome;
}

//A função TUNome::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUNome::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUNome::run chama todas as funções anteriores de TUNome e retorna a variavel estado.
int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUPais::setUp define o novo pais e estado como SUCESSO.
void TUPais::setUp(){
    pais = new Pais();
    estado = SUCESSO;
}

//A função TUPais::tearDown deleta o pais salvo.
void TUPais::tearDown(){
    delete pais;
}

//A função TUPais::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUPais::testarCenarioSucesso(){
    try{
        pais->setValor(VALOR_VALIDO);
        if (pais->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUPais::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUPais::testarCenarioFalha(){
    try{
        pais->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (pais->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUPais::run chama todas as funções anteriores de TUPais e retorna a variavel estado.
int TUPais::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUIdioma::setUp define o novo idioma e estado como SUCESSO.
void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

//A função TUIdioma::tearDown deleta o idioma salvo.
void TUIdioma::tearDown(){
    delete idioma;
}

//A função TUIdioma::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setLingua(VALOR_VALIDO);
        if (idioma->getLingua() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUIdioma::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setLingua(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (idioma->getLingua() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUIdioma::run chama todas as funções anteriores de TUIdioma e retorna a variavel estado.
int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUData::setUp define a nova data e estado como SUCESSO.
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

//A função TUData::tearDown deleta a data salva.
void TUData::tearDown(){
    delete data;
}

//A função TUData::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUData::testarCenarioSucesso(){
    try{
        data->setData_nome(VALOR_VALIDO);
        if (data->getData_nome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUData::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUData::testarCenarioFalha(){
    try{
        data->setData_nome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (data->getData_nome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUData::run chama todas as funções anteriores de TUData e retorna a variavel estado.
int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUDescricao::setUp define a nova descricao e estado como SUCESSO.
void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

//A função TUDescricao::tearDown deleta a descricao salva.
void TUDescricao::tearDown(){
    delete descricao;
}

//A função TUDescricao::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDes(VALOR_VALIDO);
        if (descricao->getDes() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUDescricao::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDes(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (descricao->getDes() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUDescricao::run chama todas as funções anteriores de TUDescricao e retorna a variavel estado.
int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUSenha::setUp define a nova senha e estado como SUCESSO.
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

//A função TUSenha::tearDown deleta a senha salva.
void TUSenha::tearDown(){
    delete senha;
}

//A função TUSenha::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setNome_senha(VALOR_VALIDO);
        if (senha->getNome_senha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUSenha::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUSenha::testarCenarioFalha(){
    try{
        senha->setNome_senha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (senha->getNome_senha()== VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUSenha::run chama todas as funções anteriores de TUSenha e retorna a variavel estado.
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUEmail::setUp define o novo email e estado como SUCESSO.
void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

//A função TUEmail::tearDown deleta o email salvo.
void TUEmail::tearDown(){
    delete email;
}

//A função TUEmail::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUEmail::testarCenarioSucesso(){
    try{
        email->setNomeemsil(VALOR_VALIDO);
        if (email->getNomeemail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUEmail::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUEmail::testarCenarioFalha(){
    try{
        email->setNomeemsil(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (email->getNomeemail()== VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUEmail::run chama todas as funções anteriores de TUEmail e retorna a variavel estado.
int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//A função TUCodigo::setUp define o nova codigo e estado como SUCESSO.
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

//A função TUCodigo::tearDown deleta o codigo salvo.
void TUCodigo::tearDown(){
    delete codigo;
}

//A função TUCodigo::testarCenarioSucesso faz um try verificando se o valor recebido pelo SetValor é valido ou não, se não for VALIDO o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção e definindo que o estado é FALHO
void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

//A função TUCodigo::testarCenarioFalha faz um try verificando se o valor recebido pelo SetValor é Invalido ou não, se não for Invalido o estado recebe FALHA
//Depois faz o catch para caso um argumento invalido tenha aparecido como exceção, armazena o VALOR_INVALIDO e definindo que o estado é FALHO
void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getValor()== VALOR_INVALIDO)
            estado = FALHA;
    }
}

//A função TUCodigo::run chama todas as funções anteriores de TUCodigo e retorna a variavel estado.
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}