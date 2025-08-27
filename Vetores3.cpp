#include <iostream>

using namespace std;

const int vetN = 5;
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

void exibirValoresMaioresQueAMedia(float media, tvetor vetor) {
    cout<<"Valores maiores que a média:"<<endl;
    for (int i = 0; i < vetN; i++) {
        if (vetor[i] > media) {
            cout<<vetor[i]<<"\t";
        }
    }
}

int main() {
    tvetor vetor;
    popularVetor(vetor);
    float media = calcularMediaVetor(vetor);
    exibirValoresMaioresQueAMedia(media, vetor);
    return 0;
}