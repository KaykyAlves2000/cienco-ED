#include <iostream>
using namespace std;

int main() {
    int A[10], M[10], X;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor para A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Digite o valor de X: ";
    cin >> X;

    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    cout << "Vetor M (A * X): ";
    for (int i = 0; i < 10; i++) {
        cout << M[i] << " ";
    }
    cout << endl;

    return 0;
}
