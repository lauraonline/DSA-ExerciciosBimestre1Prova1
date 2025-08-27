#include <iostream>

using namespace std;

const int vetN = 20;
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

int calcularQtdeValoresMaioresQueAMedia(float media, tvetor vetor) {
    int quantidade = 0;
    for (int i = 0; i < vetN; i++) {
        if (vetor[i] > media) {
            quantidade++;
        }
    }
    return quantidade;
}

int main() {
    tvetor vetor;
    popularVetor(vetor);
    float media = calcularMediaVetor(vetor);
    int quantidade = calcularQtdeValoresMaioresQueAMedia(media, vetor);
    cout<<"Quantidade de valores maiores que a média: "<<quantidade;
    return 0;
}