#include <iostream>

using namespace std;

const int matI = 3;
const int matJ = 3;

typedef int tmatriz[matI][matJ];

void preencherMatriz(tmatriz &matriz) {
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
}

void exibirMatriz(tmatriz matriz) {
    cout<<"Matriz:"<<endl;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int SomaSegundaColuna (tmatriz matriz) {
    int soma = 0;
    for (int i = 0; i < matI; i++) {
        soma += matriz[i][1];
    }
    return soma;
}

int ProdutoPrimeiraLinha (tmatriz matriz) {
    int produto = 1;
    for (int j = 0; j < matJ; j++) {
        produto *= matriz[0][j];
    }
    return produto;
}

int SomaDiagonalPrincipal (tmatriz matriz) {
    int soma = 0;
    for (int i = 0; i < matI; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int SomaDiagonalSecundaria (tmatriz matriz) {
    int soma = 0, j;
    for (int i = 0; i < matI; i++) {
        j = matJ - 1 - i;
        soma += matriz[i][j];
    }
    return soma;
}

// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33

int main() {
    tmatriz matriz;

    preencherMatriz(matriz);
    exibirMatriz(matriz);
    cout<<"Soma dos elementos da segunda coluna: "<<SomaSegundaColuna(matriz)<<endl;
    cout<<"Produto entre os elementos da primeira linha: "<<ProdutoPrimeiraLinha(matriz)<<endl; // errado
    cout<<"Soma dos elementos da diagonal principal: "<<SomaDiagonalPrincipal(matriz)<<endl;
    cout<<"Soma dos elementos da diagonal secundária: "<<SomaDiagonalSecundaria(matriz)<<endl;
}