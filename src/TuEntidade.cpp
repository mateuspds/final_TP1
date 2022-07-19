#include "TuEntidade.h"

//matricula: 190035145

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setNome(VALOR_VALIDONome);
    usuario->setNome(nome);
    if(usuario->getNome().getNome() != VALOR_VALIDONome)
        estado = FALHA;

    Email email;
    email.setNomeemsil(VALOR_VALIDOEmail);
    usuario->setEmail(email);
    if(usuario->getEmail().getNomeemail() != VALOR_VALIDOEmail)
        estado = FALHA;

    Senha senha;
    senha.setNome_senha(VALOR_VALIDOSenha);
    usuario->setSenha(senha);
    if(usuario->getSenha().getNome_senha() != VALOR_VALIDOSenha)
        estado = FALHA;

    Idioma idioma;
    idioma.setLingua(VALOR_VALIDOIdioma);
    usuario->setIdioma(idioma);
    if(usuario->getIdioma().getLingua() != VALOR_VALIDOIdioma)
        estado = FALHA;

    Data data;
    data.setData_nome(VALOR_VALIDOData);
    usuario->setData(data);
    if(usuario->getData().getData_nome() != VALOR_VALIDOData)
        estado = FALHA;

    Descricao descri;
    descri.setDes(VALOR_VALIDODescri);
    usuario->setDescricao(descri);
    if(usuario->getDescricao().getDes() != VALOR_VALIDODescri)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//tu Entidade Hospedagem

void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDoCodigo);
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getValor() != VALOR_VALIDoCodigo)
        estado = FALHA;

    Cidade cidade;
    cidade.setValor(VALOR_VALIDOCidade);
    hospedagem->setCidade(cidade);
    if(hospedagem->getCidade().getValor() != VALOR_VALIDOCidade)
        estado = FALHA;

    Pais pais;
    pais.setValor(VALOR_VALIDOPais);
    hospedagem->setPais(pais);
    if(hospedagem->getPais().getValor() != VALOR_VALIDOPais)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDONota);
    hospedagem->setNota(nota);
    if(hospedagem->getNota().getValor() != VALOR_VALIDONota)
        estado = FALHA;


    Descricao descri;
    descri.setDes(VALOR_VALIDODescri);
    hospedagem->setDescricao(descri);
    if(hospedagem->getDescricao().getDes() != VALOR_VALIDODescri)
        estado = FALHA;
}

int TUHospedagem::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//teste entidade Avaliacao

void TUAvalicao::setUp(){
    avali = new Avaliacao();
    estado = SUCESSO;
}

void TUAvalicao::tearDown(){
    delete avali;
}

void TUAvalicao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDoCodigo);
    avali->setCodigo(codigo);
    if(avali->getCodigo().getValor() != VALOR_VALIDoCodigo)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDONota);
    avali->setNota(nota);
    if(avali->getNota().getValor() != VALOR_VALIDONota)
        estado = FALHA;


    Descricao descri;
    descri.setDes(VALOR_VALIDODescri);
    avali->setDescricao(descri);
    if(avali->getDescricao().getDes() != VALOR_VALIDODescri)
        estado = FALHA;
}

int TUAvalicao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

