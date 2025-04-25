#include <iostream>

using namespace std;

int main()
{
    float horas, salarioM, salarioB, salarioRec,imposto, horasT;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    cout << "Valor do salario minimo";
    cin >> salarioM;

    horasT = salarioM / 2;

    salarioB = horasT * horas;

    imposto = salarioB * 3/100;
    salarioRec = salarioB - imposto;

    cout << "O salario bruto é:" << salarioB << endl;

    cout << "A receber: " << salarioRec << endl;



}
