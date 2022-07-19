#ifndef TUDOMINIOS_H
#define TUDOMINIOS_H
#include "dominios.h"
#include <cstring>

//matricula: 190035145

//Todos as classes aqui estão com valores definidos para serem testadas nos Testes Unitarios propostos.

using namespace std;
///Classe TUCidade tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUNota tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUNome tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUPais tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUIdioma tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUData tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUDescricao tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUSenha tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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


///Classe TUEmail tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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

///Classe TUCodigo tem um valor valido e um valor invalido para testar o certo e errado no TESTE UNITARIO, além disso, pegamos as informações necessárias juntos com o #include "dominios.h"
/// A classe é dividade em 2 partes, as informações Públicas que definem valores que aparecem nos testes e que chama a função para rodar o programa
/// e as Privadas que pegam as informações necessarias e chamam as funções para fazer os testes necessarios.
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