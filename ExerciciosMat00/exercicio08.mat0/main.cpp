#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int voto;
    int totalVotos = 0;
    int votosCandidato1 = 0, votosCandidato2 = 0, votosNulos = 0, votosBrancos = 0;

    cout << "Digite os votos (1, 2 para candidatos, 3 para nulo, 4 para em branco, 0 para finalizar):" << endl;

    while (true) {
        cin >> voto;

        if (voto == 0) {
            break;
        }

        switch (voto) {

            case 1:
                votosCandidato1++;
                totalVotos++;
                break;
            case 2:
                votosCandidato2++;
                totalVotos++;
                break;
            case 3:
                votosNulos++;
                totalVotos++;
                break;
            case 4:
                votosBrancos++;
                totalVotos++;
                break;
            default:
                cout << "Código inválido! Digite novamente." << endl;
                break;
        }
    }

    if (totalVotos == 0) {
        cout << "Nenhum voto registrado." << endl;
    } else {

        double percentualCandidato1 = (votosCandidato1 * 100.0) / totalVotos;
        double percentualCandidato2 = (votosCandidato2 * 100.0) / totalVotos;
        double percentualNulos = (votosNulos * 100.0) / totalVotos;
        double percentualBrancos = (votosBrancos * 100.0) / totalVotos;

        cout << "Percentual de votos para o Candidato 1: " << percentualCandidato1 << "%" << endl;
        cout << "Percentual de votos para o Candidato 2: " << percentualCandidato2 << "%" << endl;
        cout << "Percentual de votos nulos: " << percentualNulos << "%" << endl;
        cout << "Percentual de votos em branco: " << percentualBrancos << "%" << endl;
    }

    return 0;
}
