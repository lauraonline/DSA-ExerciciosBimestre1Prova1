#include <iostream>

using namespace std;

const int vetN = 4;
typedef int tvetor[vetN];

void popularVetor(tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Valor "<<i+1<<": ";
        cin>>vetor[i];
    }
}

float calcularMediaVetor(tvetor vetor) {
    int total = 0;
    for (int i = 0; i < vetN; i++) {
        total += vetor[i];
    }
    float media = (float)total/vetN;
    return media;
}

main() {
    tvetor vetor;
    popularVetor(vetor);
    cout<<"Maior idade: "<<verificarMaiorIdade(vetor);
}