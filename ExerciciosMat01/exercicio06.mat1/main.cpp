#include <iostream>
using namespace std;

int main() {
    const int DIAS = 365;
    float temperaturas[DIAS], soma = 0, media, minTemp = 999, maxTemp = -999;
    int abaixoMedia = 0;

    for (int i = 0; i < DIAS; i++) {
        cout << "Temperatura do dia " << i+1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
        if (temperaturas[i] < minTemp) minTemp = temperaturas[i];
        if (temperaturas[i] > maxTemp) maxTemp = temperaturas[i];
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; i++) {
        if (temperaturas[i] < media)
            abaixoMedia++;
    }

    cout << "Menor temperatura do ano: " << minTemp << endl;
    cout << "Maior temperatura do ano: " << maxTemp << endl;
    cout << "Temperatura media anual: " << media << endl;
    cout << "Dias com temperatura abaixo da media: " << abaixoMedia << endl;

    return 0;
}
