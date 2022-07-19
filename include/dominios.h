#ifndef DOMINIOS_H
#define DOMINIOS_H


#include <string>

//matricula: 190035145
///Dominios responsaveis por identificar e coletar cada uma de suas variaveis para facilitar o desenvolvemento do código.
using namespace std;
///Classe que identifica e armazena o Nome.
class Nome {
    private:
        string nome;
        void validar(string);
    public:
        void setNome(string);
        string getNome()const;
};
inline string Nome::getNome()const{
    return nome;
}

///Classe que identifica e armazena o E-mail.
class Email{
    private:
        string nome_email;
        void validar(string);
    public:
        void setNomeemsil(string);
        string getNomeemail()const;
};
inline string Email::getNomeemail()const{
    return nome_email;
}

///Classe que identifica e armazena a Senha.
class Senha{
    private:
        string nome_senha;
        void validar(string);
    public:
        void setNome_senha(string);
        string getNome_senha()const;
};
inline string Senha::getNome_senha()const{
    return nome_senha;
}

///Classe que identifica e armazena o Idioma.
class Idioma{
    private:
        string lingua;
        void validar(string);
    public:
        void setLingua(string);
        string getLingua()const;
};
inline string Idioma::getLingua()const{
return lingua;
}

///Classe que identifica e armazena a Data.
class Data{
    private:
        string data_nome;
        void validar(string);
    public:
        void setData_nome(string);
        string getData_nome()const;
};
inline string Data::getData_nome()const{
    return data_nome;
}

///Classe que identifica e armazena a Descrição.
class Descricao{
    private:
        string des;
        void validar(string);
    public:
        void setDes(string);
        string getDes()const;
};
inline string Descricao::getDes()const{
return des;
}

///Classe que identifica e armazena o Código.
class Codigo {
    private:
        string nomeCodigo;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const{
    return nomeCodigo;
}
///Classe que identifica e armazena a Cidade.
class Cidade {
    private:
        string nomeCidade;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Cidade::getValor() const{
    return nomeCidade;
}
///Classe que identifica e armazena o Pais.
class Pais {
    private:
        string nomePais;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Pais::getValor() const{
    return nomePais;
}

///Classe que identifica e armazena a Nota.
class Nota {
    private:
        int nomeNota;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Nota::getValor() const{
    return nomeNota;
}

#endif // DOMINIOS_H