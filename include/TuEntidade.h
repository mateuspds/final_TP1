#ifndef TUENTIDADE_H
#define TUENTIDADE_H
#include "entidades.h"

//matricula: 190035145


using namespace std;

// Dentro da Classe TUUsuario é necessário definir quais são os valores validos para cada um dos métodos inline chamados no '#include "entidades.h"' e também especificar por quais testes eles vão passar
// A classe é divida em duas partes Publica que define as constantes de sucesso e falha e chama a função run() para rodar os métodos e a privada que define os valores validos dos métodos inline
// além de chamar as funções de testes especificos.
class TUUsuario {
private:
    inline const static string VALOR_VALIDONome   ="Mateus";
    inline const static string VALOR_VALIDOEmail   ="Mateus.silva09082000@gmail.com";
    inline const static string VALOR_VALIDOSenha   ="senha4#k";
    inline const static string VALOR_VALIDOIdioma   ="Ingles";
    inline const static string VALOR_VALIDOData   ="07/Jan";
    inline const static string VALOR_VALIDODescri ="texto elaborado perfeito";

     Usuario *usuario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// Dentro da Classe TUUHospedagem é necessário definir quais são os valores validos para cada um dos métodos inline chamados no '#include "entidades.h"' e também especificar por quais testes eles vão passar
// A classe é divida em duas partes Publica que define as constantes de sucesso e falha e chama a função run() para rodar os métodos e a privada que define os valores validos dos métodos inline
// além de chamar as funções de testes especificos.
class TUHospedagem {
private:
    inline const static string VALOR_VALIDoCodigo   ="79927398713";
    inline const static string VALOR_VALIDOCidade   ="Paris";
    inline const static string VALOR_VALIDOPais  ="Brasil";
    const static int VALOR_VALIDONota =5;
    inline const static string VALOR_VALIDODescri ="texto elaborado perfeito";

     Hospedagem *hospedagem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// Dentro da Classe TUAvalicao é necessário definir quais são os valores validos para cada um dos métodos inline chamados no '#include "entidades.h"' e também especificar por quais testes eles vão passar
// A classe é divida em duas partes Publica que define as constantes de sucesso e falha e chama a função run() para rodar os métodos e a privada que define os valores validos dos métodos inline
// além de chamar as funções de testes especificos.
class TUAvalicao {
private:
    inline const static string VALOR_VALIDoCodigo   ="79927398713";
    const static int VALOR_VALIDONota =5;
    inline const static string VALOR_VALIDODescri ="texto elaborado perfeito";

    Avaliacao *avali;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TUENTIDADE_H
