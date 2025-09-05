#include <iostream>

using namespace std;

const int M = 3;
const int N = 4;
typedef float tmatriz[M][N];

void preencherMatriz(tmatriz &matriz) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
}
void exibirMatriz(tmatriz matriz) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

float calcularSomaColuna(tmatriz matriz, int coluna) {
    float soma = 0;
    for (int i = 0; i < N; i++) {
        soma += matriz[i][coluna-1];
    }
    return soma;
}

void analisarValoresAbaixoDaMedia(tmatriz matriz) {
    int numeroDeValoresAbaixoDaMedia;
    float soma;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            soma += matriz[i][j];
        }
    }
    float media = soma/(M*N);
    cout<<"Valores abaixo da média: ";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < media) {
                numeroDeValoresAbaixoDaMedia++;
                cout<<matriz[i][j]<<", ";
            }
        }
    }
    cout<<endl<<"Número de valores abaixo da média: "<<numeroDeValoresAbaixoDaMedia;
}

main() {
    tmatriz matriz;
    preencherMatriz(matriz);
    exibirMatriz(matriz);
    for (int i = 1; i < N-1; i++) {
        cout<<"Soma da coluna "<<i<<": "<<calcularSomaColuna(matriz, i)<<endl;
    }
    analisarValoresAbaixoDaMedia(matriz);
}