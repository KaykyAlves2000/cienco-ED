#include <iostream>
using namespace std;

int main() {
    int valores[5], soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> *(valores + i);
        soma += *(valores + i);
    }

    media = (float)soma / 5;

    cout << "Media dos valores: " << media << endl;

    return 0;
}
