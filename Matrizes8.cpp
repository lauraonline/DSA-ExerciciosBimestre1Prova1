#include <iostream>

using namespace std;

const int matI = 10;
const int matJ = 10;
typedef float tmatriz[matI][matJ];

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

void receberOrdem(int &num) {
    cin>>num;
    while (num < 1 || num > 10) {
        cout<<"Entrada inválida! Tente novamente: ";
        cin>>num;
    }
}

bool verificarPossibilidadeProduto (int j1, int i2) {
    bool possivel = (j1 == i2) ? true : false;
    return possivel;
}

main() {
    tmatriz matriz1;
    tmatriz matriz2;
    int matriz1I, matriz1J, matriz2I, matriz2J;

    cout<<"Ordem 1 matriz 1: ";
    receberOrdem(matriz1I);
    cout<<"Ordem 2 matriz 1: ";
    receberOrdem(matriz1J);
    cout<<"Ordem 1 matriz 2: ";
    receberOrdem(matriz2I);
    cout<<"Ordem 2 matriz 2: ";
    receberOrdem(matriz2J);

    cout<<"Possivel: "<<verificarPossibilidadeProduto(matriz1J, matriz2I);
}