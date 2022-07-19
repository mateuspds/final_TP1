 #include "dominios.h"
 #include<string>
 #include <list>
 #include <iostream>
 #include <cstring>

 //matricula: 190035145


 using namespace std;

//function fora
bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
//fora


//implementação da validação de Pais...
void Pais::validar(string nomedoPais){
    int numpais = 0;
    std::list<string> mypaises = {"Estados Unidos", "Brasil", "China","Coreia do Sul", "Emirados", "Franca", "India", "Japao", "Malasia",
    "Reino Unido", "Tailandia", "Turquia"};
    for(string x : mypaises){
        if(nomedoPais == x){
            numpais = ++numpais;
            break;
        }
    }
   if(numpais <= 0)
        throw std::invalid_argument("Argumento invalido");


}
void Pais::setValor(string nome){
    validar(nome);
    this->nomePais = nome;
}

//implementaçao do metodo validar de Cidade

void Cidade::validar(string nome){

    int numCidade = 0;

    std::list<string> mypaises = {"Antalya", "Bangkok", "Delhi","Dubai", "Hong Hong", "Londres", "Macau", "Mumbai", "Paris",
    "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul","Kuala Lampur", "Nova Iorque","Osaka",
     "Phuket", "Shenzhen", "Toquio"};
    for(string x : mypaises){
        if(nome == x){
            numCidade = ++numCidade;
            break;
        }
    }
   if(numCidade <= 0)
        throw std::invalid_argument("Argumento invalido");
}
void Cidade::setValor(string nome){
    validar(nome);
    this->nomeCidade = nome;
}

//imolementação do metodo de validação de Idioma

void Idioma::validar( string lingue){
    int numerocidade = 0;
    std::list<string> myidiomas = {"Ingles","Chines","Mandarim","Hindi","Espanhol",
    "Frances","Arabe","Bengali","Russo","Portugues","Indonesio"};

        for(string x : myidiomas){
            if(lingue == x){
                numerocidade = ++numerocidade;
                break;
            }
        }
        if(numerocidade <= 0)
            throw std::invalid_argument("Argumento invalido");
}

void Idioma::setLingua(string idioma){
    validar(idioma);
    this->lingua = idioma;
}

//implementação da validação de nota
void Nota::validar(int num){
        if(num >10 || num <0)
            throw std::invalid_argument("Argumento invalido");

}


void Nota::setValor(int numero){
    validar(numero);
    this->nomeNota = numero;
}
//implementação da validação de descricao

void Descricao::validar(string descri){
   int n = descri.length();
    if(n >40 || n<=0)
        throw invalid_argument("Argumento invalido");
     for (int x = 0; x < n; x++) {
        if(x<n){
            if(descri[x] == '.'&& descri[++x]== '.'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ','&& descri[++x]== ','){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ';'&& descri[++x]== ';'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ':'&& descri[++x]== ':'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '?'&& descri[++x]== '?'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '!'&& descri[++x]== '!'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '-'&& descri[++x]== '-'){
            throw invalid_argument("Argumento invalido");
            break;
}
        if(descri[x] == ' '&& descri[++x]== ' '){
            throw invalid_argument("Argumento invalido");
            break;
        }
    }
}


}

void Descricao::setDes(string descri){
    validar(descri);
    this->des=descri;
}

//implementação de nome

void Nome::validar(string nome){
        int x=0;
        int n= nome.length();
        if(n>30){
            throw invalid_argument("Argumento invalido");
        }
        for(int i=0;i<n;i++){
            if(nome[0]<'A' && nome[0]>'Z'){
                throw invalid_argument("Argumento invalido");
        }
            if(i>0){
                if(nome[i]!=' '){
                    if(nome[i]<'a'|| nome[i]>'z'){
                        throw invalid_argument("Argumento invalido");
            }

              }else{
                if(nome[++i]==' '){
                    throw invalid_argument("Argumento invalido");
                }else{
                    if(nome[i]<'A' || nome[i]>'Z'){
                        throw invalid_argument("Argumento invalido");
                    }

                }
            }
        }
    }
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome=nome;
}

//validação de senha
void Senha::validar(string senha){

 int tamstring = senha.length();
    int letra=0;
    int digito = 0;
    int caracterEspecial = 0;
    for(int i=0;i<tamstring;i++){
        if(senha[i]>= 48 && senha[i]<=57){
            digito = ++digito;
        }if(senha[i]>= 'a'&& senha[i]<='z'){
            letra = ++letra;
        } if(senha[i]>= 'A'&& senha[i]<='Z'){
             letra = ++letra;
        }if(senha[i]>=33 && senha[i]<=38){
            caracterEspecial=++caracterEspecial;
        }


    }
     if(letra <1 || digito<1 || caracterEspecial <1){
        throw invalid_argument("argumento invalido");
        }


}


void Senha::setNome_senha(string senha){
    validar(senha);
    this->nome_senha=senha;
}

//validação de Data
void Data::validar(string data){
    int tamanhoData= data.length();
    char mesi[3];
    mesi[0]=data[3];
    mesi[1]=data[4];
    mesi[2]=data[5];
    string mes=mesi;

    if(tamanhoData != 6){
        throw invalid_argument("argumento invalido");
    }else{
            if(data[0] <48 ||data[0]>51){
                throw invalid_argument("argumento invalido");
            }
            if(data[0]>50 && data[1]>49){
                throw invalid_argument("argumento invalido");
            }

            if(data[1] <48 ||data[1]>57){
                throw invalid_argument("argumento invalido");
            }
            if(data[2] != '/'){
                throw invalid_argument("argumento invalido");
            }
            if(mes != "Jan" && mes != "Fev" && mes != "Mar" && mes != "Abr" && mes != "Mai" && mes != "Jun" && mes != "Jul" && mes != "Ago"&& mes != "Set" && mes != "Out" && mes != "Nov" &&mes != "Dez"){
                throw invalid_argument("argumento invalido");

            }


    }


}

void Data::setData_nome(string datinha){
    validar(datinha);
    this->data_nome=datinha;
}

//validação de codigo

void Codigo::validar(string codigo){
int tamanho = codigo.length();
for(int i=0;i<tamanho;i++){
    if(codigo[i]<48 || codigo[i]>57){
        throw invalid_argument("argumento invalido");
    }
}
if(checkLuhn(codigo)){}
else{
 throw invalid_argument("argumento invalido");
}

}

void Codigo::setValor(string codigo){
    validar(codigo);
    this->nomeCodigo=codigo;
}

void Email::validar(string email){
int tamanho = email.length();
    if(email[0]=='.')
        throw invalid_argument("argumento invalido");
    for(int i=0;i<tamanho;i++){
        if(email[i]=='@'){
            if(i>64)
                throw invalid_argument("argumento invalido");
        }
        if(email[i] >32 && email[i] <48 ){
            int n=++i;
            if(email[n] >48 && email[n] < 59 ||email[n] >64 && email[n] < 91 || email[n] >60 && email[n] < 123){

            }else{
                throw invalid_argument("argumento invalido");
            }
        }
    }

}

void Email::setNomeemsil(string email){
    validar(email);
    this->nome_email=email;
}
