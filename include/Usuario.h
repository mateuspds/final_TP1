#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <dominioUsuario.h>

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
inline void Usuario::setNome(const Nome   &nome){
    this->nome = nome;
}
inline Nome Usuario::getNome()const{
    return nome;
}

//metodos inline de Email
inline void Usuario::setEmail(const Email &email){
    this->email = email;
}
inline Email Usuario::getEmail()const{
    return email;
}

//metodos inline de senha
inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}
inline Senha Usuario::getSenha()const{
    return senha;
}

//metodo inline de idioma
inline void Usuario::setIdioma(const Idioma &idioma){
    this->idioma= idioma;
}
inline Idioma Usuario::getIdioma()const{
    return idioma;
}


#endif // USUARIO_H
