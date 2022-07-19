#ifndef ENTIDADES_H
#define ENTIDADES_H
#include<dominios.h>


//matricula: 190035145

using namespace std;
///Entidade responsavel pelas Classes que compoem o a Classe Usuario, como Nome,Email,Senha,Idioma,Data,Descricao e outras.
class Usuario{
private:
    Nome nome;
    Email email;
    Senha senha;
    Idioma idioma;
    Data data;
    Descricao descricao;
public:
    void setNome(const Nome&);
    Nome getNome() const;

    void setEmail(const Email&);
    Email getEmail() const;

    void setSenha(const Senha&);
    Senha getSenha() const;

    void setIdioma(const Idioma&);
    Idioma getIdioma() const;

    void setData(const Data&);
    Data getData() const;

    void setDescricao(const Descricao&);
    Descricao getDescricao() const;
};

// Em todos os metodos inlines abaixo, são referentes a Classe Usuário e eles 
// foram utilizados o termo "this->" para evitar que o compilador tenha problemas 
// em identificar uma variavel/membro em cada um dos dominios.

//metodos inline de Nome em Usuario.
inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
}
//metodos inline de Nome em Usuario.
inline Nome Usuario::getNome()const{
    return nome;
}

//metodos inline de Email em Usuario.
inline void Usuario::setEmail(const Email& email){
    this->email = email;
}
//metodos inline de Email em Usuario.
inline Email Usuario::getEmail()const{
    return email;
}

//metodos inline de Senha em Usuario.
inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
}
//metodos inline de Senha em Usuario.
inline Senha Usuario::getSenha()const{
    return senha;
}

//metodo inline de Idioma em Usuario.
inline void Usuario::setIdioma(const Idioma& idioma){
    this->idioma= idioma;
}
//metodo inline de Idioma em Usuario.
inline Idioma Usuario::getIdioma()const{
    return idioma;
}

//metodo inline de Data em Usuario.
inline void Usuario::setData(const Data& data){
    this->data = data;
}
//metodo inline de Data em Usuario.
inline Data Usuario::getData()const{
    return data;
}

//metodo inline de Descricao em Usuario.
inline void Usuario::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
//metodo inline de Descricao em Usuario.
inline Descricao Usuario::getDescricao()const{
    return descricao;
}

///Entidade responsavel pelas Classes que compoem o a Classe Hospedagem, como Codigo, Cidade, Pais, Nota e Descrição.
class Hospedagem {
    private:
        Codigo codigo;
        Cidade cidade;
        Pais pais;
        Nota nota;
        Descricao descricao;
    public:
         void setCodigo(const Codigo&);
         Codigo getCodigo() const;

         void setCidade(const Cidade&);
         Cidade getCidade()const;

         void setPais(const Pais&);
         Pais getPais()const;

         void setNota(const Nota&);
         Nota getNota()const;

         void setDescricao(const Descricao&);
         Descricao getDescricao() const;
};

// Em todos os metodos inlines abaixo, são referentes a Classe Hospedagem e eles 
// foram utilizados o termo "this->" para evitar que o compilador tenha problemas 
// em identificar uma variavel/membro em cada um dos dominios.

//metodos inlines de Codigo em Hospedagem.
inline void Hospedagem::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
//metodos inlines de Codigo em Hospedagem.
inline Codigo Hospedagem::getCodigo()const{
    return codigo;
}

//metodos inlines de Cidade em Hospedagem.
inline void Hospedagem::setCidade(const Cidade& cidade){
    this->cidade = cidade;
}
//metodos inlines de Cidade em Hospedagem.
inline Cidade Hospedagem::getCidade()const{
    return cidade;
}

//metodos inlines de Pais em Hospedagem.
inline void Hospedagem::setPais(const Pais& pais){
    this->pais = pais;
}
//metodos inlines de Pais em Hospedagem.
inline Pais Hospedagem::getPais()const{
    return pais;
}

//metodos inlines de Nota em Hospedagem.
inline void Hospedagem::setNota(const Nota& nota){
    this->nota = nota;
}
//metodos inlines de Nota em Hospedagem.
inline Nota Hospedagem::getNota()const{
    return nota;
}

//metodos inlines de Descricao em Hospedagem.
inline void Hospedagem::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
//metodos inlines de Descricao em Hospedagem.
inline Descricao Hospedagem::getDescricao()const{
    return descricao;
}

///Entidade responsavel pelas Classes que compoem o a Classe Avaliacao, como Codigo, Nota e Descrição.
class Avaliacao {

    private:
        Codigo codigo;
        Nota nota;
        Descricao descricao;

    public:

        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNota(const Nota&);
        Nota getNota()const;

        void setDescricao(const Descricao&);
        Descricao getDescricao() const;
};

// Em todos os metodos inlines abaixo, são referentes a Classe Hospedagem e eles 
// foram utilizados o termo "this->" para evitar que o compilador tenha problemas 
// em identificar uma variavel/membro em cada um dos dominios.

//metodos inline de Codigo em Avaliação.
inline void Avaliacao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
//metodos inline de Codigo em Avaliação.
inline Codigo Avaliacao::getCodigo()const{
    return codigo;
}

//metodos inline de Nota em Avaliação.
inline void Avaliacao::setNota(const Nota& nota){
    this->nota = nota;
}
//metodos inline de Nota em Avaliação.
inline Nota Avaliacao::getNota()const{
    return nota;
}

//metodos inline de Descricao em Avaliação.
inline void Avaliacao::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
//metodos inline de Descricao em Avaliação.
inline Descricao Avaliacao::getDescricao()const{
    return descricao;
}

#endif // ENTIDADES_H