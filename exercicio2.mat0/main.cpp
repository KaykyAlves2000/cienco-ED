#include <iostream>

using namespace std;

int main()
{
    int idade;
    string categoria;

    cout << "Informe a idade do nadador: ";
    cin >> idade;

    if (idade < 5 ){
        cout << "Sem classificação!0";
    }
    else if (idade <=7){
        cout << "nadador da categoria infantil A";
    }
    else if (idade <= 10){
        cout << "Nadador na classificação Infantil B.";
    }
    else if (idade <=13){
        cout << "Juvenil A";
    }
    else if (idade <=17){
        cout << "Juvenil B";
    }
    else {
        cout << "Senior";
    }

    return 0;
}
