#include <iostream>

using namespace std;

void imprimeVetor(int vetor[]){
    int i;
    cout << endl;
    for (i = 0; i < 5; i++){
        cout << " | " << vetor[i] << " | ";
    }
}

void bubbleSort3(int x[])
{

	//ordenando de forma decrescente
	//laço com a quantidade de elementos do vetor
	//e enquanto houver troca
	int n = 1 ;
	int troca = 1;
	int aux = 0;
	while (n <= 5 && troca == 1)
	{
		troca = 0;
		for (int i = 0; i <= 3; i++)
		{
			if (x[i] < x[i + 1])
			{
				troca = 1;
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
			}
		}
		n++;
	}
