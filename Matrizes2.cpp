#include <iostream>

using namespace std;

const int matI = 3;
const int matJ = 4;

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

int main() {
    tmatriz matriz;
    preencherMatriz (matriz);
    exibirMatriz(matriz);
    return 0;
}