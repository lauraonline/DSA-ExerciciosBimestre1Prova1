#include <iostream>

using namespace std;

const int vetN = 10;
typedef string tvetor[vetN];

void popularVetor(tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Nome "<<i+1<<": ";
        cin>>vetor[i];
    }
}

string obterPrimeiroNomeOrdemAlfa (tvetor vetor) {
    string primeiro = vetor[0];
    for (int i = 0; i < vetN; i++) {
        if (vetor[i][0] < primeiro[0]) {
            primeiro = vetor[i];
        }
    }
    return primeiro;
}

int main() {
    tvetor vetorNomes;
    popularVetor(vetorNomes);
    cout<<"\"Maior\" nome: "<<obterPrimeiroNomeOrdemAlfa(vetorNomes);
    return 0;
}