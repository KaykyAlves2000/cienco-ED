#include <iostream>

using namespace std;

int main()
{
    float precoeti;
    int condpag;

    cout << "Qual o valor do produto? ";
    cin >> precoeti;

    cout << "Digite o numero correspondente par cada op��o:" << endl;
    cout << "(1)A vista em dinheiro ou cheque, com 10% de desconto."<< endl;
    cout << "(2)A vista com cart�o de credito, com 5%% de desconto."<< endl;
    cout << "(3)Em 2x, pre�o normal da etiqueta"<< endl;
    cout << "(4)Em 2x, pre�o de etiqueta com acrescimo de 10%" << endl;

    cout << "Qual ser� o numero correspondente da aop��o escolhida?";
    cin >> condpag;

    switch(condpag)
    {
    case 1 :
    precoeti = precoeti - 10/100;

    break;

    case 2 :

        precoeti = precoeti - 5/100;

        break;

    case 3 :


         precoeti = precoeti;

        break;

     case 4 :


        precoeti = precoeti + 10/100;

        break;

     }

     cout << "Valor final = "<< precoeti << endl;

    }







