#include <iostream>

using namespace std;

const int matI = 10;
const int matJ = 10;
typedef float tmatriz[matI][matJ];
typedef int tvetorint4P[4];

void preencherMatriz(tmatriz &matriz, int matIatual, int matJatual) {
    for (int i = 0; i < matIatual; i++) {
        for (int j = 0; j < matJatual; j++) {
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

void multiplicarMatriz (tvetorint4P ordens, tmatriz matriz1, tmatriz matriz2, tmatriz &matriz3) {
    for (int i = 0; )
}

main() {
    tmatriz matriz1;
    tmatriz matriz2;
    tvetorint4P ordemMatrizes;

    cout<<"Ordem 1 matriz 1: ";
    receberOrdem(ordemMatrizes[0]);
    cout<<"Ordem 2 matriz 1: ";
    receberOrdem(ordemMatrizes[1]);
    cout<<"Ordem 1 matriz 2: ";
    receberOrdem(ordemMatrizes[2]);
    cout<<"Ordem 2 matriz 2: ";
    receberOrdem(ordemMatrizes[3]);
    
    if (verificarPossibilidadeProduto(matriz1J, matriz2I)) {
        cout<<"Matriz 1:"<<endl;
        preencherMatriz(matriz1, matriz1I, matriz1J);
        cout<<"Matriz 2:"<<endl;
        preencherMatriz(matriz2, matriz2I, matriz2J);
    } else {
        cout<<"Produto impossível! "<<matriz1J<<" =/= "<<matriz2I<<endl;
    }

    
}
