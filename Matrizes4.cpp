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
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void somar2Matrizes(tmatriz matrizA, tmatriz matrizB, tmatriz &matrizC) {
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    tmatriz matrizA;
    tmatriz matrizB;
    tmatriz matrizC;

    cout<<"Matriz A:"<<endl;
    preencherMatriz(matrizA);
    cout<<"Matriz B:"<<endl;
    preencherMatriz(matrizB);

    cout<<"Matriz A:"<<endl;
    exibirMatriz(matrizA);
    cout<<"Matriz B:"<<endl;
    exibirMatriz(matrizB);

    somar2Matrizes(matrizA, matrizB, matrizC);
    cout<<"Matriz C (resultado):"<<endl;
    exibirMatriz(matrizC);
}