#ifndef ENTIDADES_H
#define ENTIDADES_H
#include<dominios.h>


//matricula: 190035145

using namespace std;
///Entidade responsavel pelas classes que compoem o usuario, como Nome,Email,Senha,Idioma,Data,Descricao....
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

//falta os metodos inlines de cada dominio

//metodos inline de nome
inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
}
inline Nome Usuario::getNome()const{
    return nome;
}

//metodos inline de Email
inline void Usuario::setEmail(const Email& email){
    this->email = email;
}
inline Email Usuario::getEmail()const{
    return email;
}

//metodos inline de senha
inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
}
inline Senha Usuario::getSenha()const{
    return senha;
}

//metodo inline de idioma
inline void Usuario::setIdioma(const Idioma& idioma){
    this->idioma= idioma;
}
inline Idioma Usuario::getIdioma()const{
    return idioma;
}

//metodo inline de Data
inline void Usuario::setData(const Data& data){
    this->data = data;
}
inline Data Usuario::getData()const{
    return data;
}

//metodo inline de Descricao
inline void Usuario::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Usuario::getDescricao()const{
    return descricao;
}

//entidade Hospedagem
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

//metodos inlines da entidade Hospedagem
inline void Hospedagem::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Hospedagem::getCodigo()const{
    return codigo;
}

inline void Hospedagem::setCidade(const Cidade& cidade){
    this->cidade = cidade;
}
inline Cidade Hospedagem::getCidade()const{
    return cidade;
}

inline void Hospedagem::setPais(const Pais& pais){
    this->pais = pais;
}
inline Pais Hospedagem::getPais()const{
    return pais;
}

inline void Hospedagem::setNota(const Nota& nota){
    this->nota = nota;
}
inline Nota Hospedagem::getNota()const{
    return nota;
}

inline void Hospedagem::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Hospedagem::getDescricao()const{
    return descricao;
}

//Entidade Avaliação

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

//metodos inline de Avaliação
inline void Avaliacao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Avaliacao::getCodigo()const{
    return codigo;
}

inline void Avaliacao::setNota(const Nota& nota){
    this->nota = nota;
}
inline Nota Avaliacao::getNota()const{
    return nota;
}

inline void Avaliacao::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Avaliacao::getDescricao()const{
    return descricao;
}

#endif // ENTIDADES_H
