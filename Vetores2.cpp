#include <iostream>

using namespace std;

const int vetN = 20;
typedef float tvetor[vetN];

float verificarMaiorIdade(tvetor vetor) {
    float maior = vetor[0];
    for (int i = 0; i < vetN; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

void popularVetor(tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Idade da pessoa "<<i+1<<": ";
        cin>>vetor[i];
    }
}

main() {
    tvetor vetor;
    popularVetor(vetor);
    cout<<"Maior idade: "<<verificarMaiorIdade(vetor);
}