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

int somaDosElementos(tmatriz matriz) {
    int soma = 0;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int mediaDosElementos(tmatriz matriz) {
    int soma = 0;
    int numDeElementos = 0;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            soma += matriz[i][j];
            numDeElementos++;
        }
    }
    return (float)soma/numDeElementos;
}

int numeroDePares (tmatriz matriz) {
    int numDePares = 0;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            if (matriz[i][j] % 2 == 0) {
                numDePares++;
            }
        }
    }
    return numDePares;
}
int numeroDeMaioresQue10 (tmatriz matriz) {
    int numDeMaioresQue10 = 0;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            if (matriz[i][j] > 10) {
                numDeMaioresQue10++;
            }
        }
    }
    return numDeMaioresQue10;
}

int main() {
    tmatriz matriz;
    preencherMatriz (matriz);
    exibirMatriz(matriz);
    cout<<"Soma dos elementos: "<<somaDosElementos(matriz)<<endl;
    cout<<"Média dos elementos: "<<mediaDosElementos(matriz)<<endl;
    cout<<"Número de pares: "<<numeroDePares(matriz)<<endl;
    cout<<"Número de elementos maiores que 10: "<<numeroDeMaioresQue10(matriz)<<endl;
    return 0;
}