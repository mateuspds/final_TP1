#ifndef TUDOMINIOS_H
#define TUDOMINIOS_H
#include "dominios.h"
#include <cstring>
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





#endif // TUDOMINIOS_H
