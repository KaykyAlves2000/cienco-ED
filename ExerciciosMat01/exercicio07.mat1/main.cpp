#include <iostream>
using namespace std;

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor para vetor[" << i << "]: ";
        cin >> *(vetor + i);
    }

    cout << "Valores na ordem normal: ";
    for (int i = 0; i < 10; i++) {
        cout << *(vetor + i) << " ";
    }
    cout << endl;

    cout << "Valores na ordem inversa: ";
    for (int i = 9; i >= 0; i--) {
        cout << *(vetor + i) << " ";
    }
    cout << endl;

    return 0;
}
