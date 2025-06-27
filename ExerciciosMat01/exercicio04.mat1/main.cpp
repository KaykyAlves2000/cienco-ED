#include <iostream>
using namespace std;

int main() {
    int numeros[20];

    for (int i = 0; i < 20; i++) {
        cout << "Digite o numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros em ordem inversa:" << endl;
    for (int i = 19; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
