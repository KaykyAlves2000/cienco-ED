#include <iostream>

using namespace std;

int main()
{
    float salario, novoS;

    cout << "Digite seu salario: ";
    cin >> salario;

    if (salario <1000){
        novoS = salario + (salario * 15/100);

        cout << "Seu novo salario é"<< novoS << " : " << endl;

    }
    else if (salario <1500){
        novoS = salario + (salario * 10/100);

        cout << "Seu novo salario é"<< novoS << " : " << endl;

    }

    else {
        novoS = salario + (salario * 015/100);

        cout << "Seu novo salario é"<< novoS << " : " << endl;

    }

}
