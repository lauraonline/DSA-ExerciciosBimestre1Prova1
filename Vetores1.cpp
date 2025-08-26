#include <iostream>

using namespace std;

const int vetN = 4;
typedef float tvetor[vetN];

float verificarMenorSalario(tvetor vetor) {
    float menor = vetor[0];
    for (int i = 0; i < vetN; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

void popularVetor(tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Salário da posição "<<i+1<<": R$";
        cin>>vetor[i];
    }
}

main() {
    tvetor vetor;
    popularVetor(vetor);
    cout<<"Menor salário: R$"<<verificarMenorSalario(vetor);
}