#include <iostream>
#include <algorithm>

using namespace std;

const int vetN = 20;
typedef string tvetor[vetN];

void popularVetor(tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Palavra "<<i+1<<": ";
        cin>>vetor[i];
    }
}
void exibirVetor (tvetor vetor) {
    cout<<"Vetor:"<<endl;
    for (int i = 0; i < vetN; i++) {
        cout<<vetor[i]<<"\t";
    }
    cout<<endl;
}

void inverterStringsEm1Vetor (tvetor &vetor) {
    for (int i = 0; i < vetN; i++) {
        reverse(vetor[i].begin(), vetor[i].end());
    }
}

int main() {
    tvetor vetorPalavras;
    popularVetor(vetorPalavras);
    exibirVetor(vetorPalavras);
    inverterStringsEm1Vetor(vetorPalavras);
    exibirVetor(vetorPalavras);
    return 0;
}