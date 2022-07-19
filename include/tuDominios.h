#ifndef TUDOMINIOS_H
#define TUDOMINIOS_H
#include "dominios.h"
#include <cstring>

//matricula: 190035145

using namespace std;

class TUCidade{
private:
   inline const static string VALOR_VALIDO= "Paris";
  inline  const static string VALOR_INVALIDO = "Parissssw";
    Cidade *cidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUNota{
private:
    const static int VALOR_VALIDO= 5;
    const static int VALOR_INVALIDO = 11;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu nome
class TUNome{
private:
   inline const static string VALOR_VALIDO= "Mateus Pereira";
  inline  const static string VALOR_INVALIDO = "Mateus pereira";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Pais
class TUPais{
private:
   inline const static string VALOR_VALIDO= "Brasil";
  inline  const static string VALOR_INVALIDO = "Panama";
    Pais *pais;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Idioma

class TUIdioma{
private:
   inline const static string VALOR_VALIDO= "Ingles";
  inline  const static string VALOR_INVALIDO = "casteliano";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Data

class TUData{
private:
   inline const static string VALOR_VALIDO= "09/Jan";
  inline  const static string VALOR_INVALIDO = "39/Fev";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Descricao

class TUDescricao{
private:
   inline const static string VALOR_VALIDO= "texto elaborado perfeito";
  inline  const static string VALOR_INVALIDO = "texto  muito  mal";
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Senha

class TUSenha{
private:
   inline const static string VALOR_VALIDO= "senha4#k";
  inline  const static string VALOR_INVALIDO = "texto3";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


//tu Email

class TUEmail{
private:
   inline const static string VALOR_VALIDO= "mateussilva@gmail.com";
  inline  const static string VALOR_INVALIDO = ".mateussilva@gmail.com";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//tu Codigo

class TUCodigo{
private:
   inline const static string VALOR_VALIDO= "79927398713";
  inline  const static string VALOR_INVALIDO = "79927398717";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};




#endif // TUDOMINIOS_H
