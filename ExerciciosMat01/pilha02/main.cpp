#include <iostream>
#include <stack>

using namespace std;

int main()

{
    stack<int> pilha;
    cout << "A pilha esta vazia?" <<(pilha.empty()? "Sim" : "N�o") << endl;
     pilha.push(10);
     cout << "A pilha est� vazia?" << (pilha.empty() ? "Sim" : "N�o")<< endl;

}
