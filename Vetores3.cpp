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

int calcularNumeroDeValoresMaioresQueAMedia(float media, tvetor vetor) {
    int resultadoFinal = 0;
    for (int i = 0; i < vetN;  i++) {
        if (vetor[i] > media) {
            resultadoFinal++;
        }
    }
    return resultadoFinal;
}

void popularVetorComValoresMaioresQueAMedia(float media, tvetor vetor, tvetor vetorFinal) {
    for (int i, j = 0; i < vetN; i++) {
        if (vetor[i] > media) {
            vetorFinal[j] = vetor[i];
            j++;
        }
    }
}

void exibirVetor(int tamanhoVetor, tvetor vetor) {
    cout<<"Vetor:"<<endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout<<vetor[i]<<"\t";
    }
}

int main() {
    tvetor vetor;
    popularVetor(vetor);
    float media = calcularMediaVetor(vetor);
    int tamanhoVetorFinal = calcularNumeroDeValoresMaioresQueAMedia(media, vetor);
    int vetorFinal[tamanhoVetorFinal];
    popularVetorComValoresMaioresQueAMedia(media, vetor, vetorFinal);
    exibirVetor(tamanhoVetorFinal, vetorFinal);
    return 0;
}