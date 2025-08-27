#include <iostream>
#include <algorithm>

using namespace std;

const int vetN = 5;
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

void exibirPalindromosEm1Vetor (tvetor vetor) {
    cout<<"Palíndromos:"<<endl;
    for (int i = 0; i < vetN; i++) {
        string inversa = vetor[i];
        reverse(inversa.begin(), inversa.end());
        if (inversa == vetor[i]) {
            cout<<vetor[i]<<"\t";
        }
    }
}

int main() {
    tvetor vetorPalavras;
    popularVetor(vetorPalavras);
    exibirVetor(vetorPalavras);
    exibirPalindromosEm1Vetor(vetorPalavras);
    return 0;
}