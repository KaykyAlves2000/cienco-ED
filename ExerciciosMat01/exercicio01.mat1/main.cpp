#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[10];
    string nomeBusca;
    bool achei = false;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o nome da pessoa " << i+1 << ": ";
        cin >> nomes[i];
    }

    cout << "Digite um nome para buscar: ";
    cin >> nomeBusca;

    for (int i = 0; i < 10; i++) {
        if (nomes[i] == nomeBusca) {
            achei = true;
            break;
        }
    }

    if (achei)
        cout << "ACHEI" << endl;
    else
        cout << "NAO ACHEI" << endl;

    return 0;
}



