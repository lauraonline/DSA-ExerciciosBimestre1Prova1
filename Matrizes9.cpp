#include <iostream>

using namespace std;

const int matI = 4;
const int matJ = 4;

typedef float tmatriz[4][4];

void preencherMatriz (tmatriz &matriz) {
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
}

void lerMatriz (tmatriz matriz) {
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

float somaAcimaDP (tmatriz matriz) {
    float soma = 0;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            if (i < j) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

bool existeZeroAbaixoDP (tmatriz matriz) {
    bool resultado = false;
    for (int i = 0; i < matI; i++) {
        for (int j = 0; j < matJ; j++) {
            if (i > j) {
                if (matriz[i][j] == 0) resultado = true;
            }
        }
    }
    return resultado;
}

main() {
    tmatriz matriz;
    preencherMatriz(matriz);
    lerMatriz(matriz);
    cout<<"Soma acima da diagonal principal: "<<somaAcimaDP(matriz)<<endl;
    if (existeZeroAbaixoDP(matriz)) {
        cout<<"Existe um ou mais elementos iguais a zero abaixo da diagonal principal."<<endl;
    } else {
        cout<<"Não existe elemento igual a zero abaixo da diagonal principal."<<endl;
    }
}


//00 01 02 03
//10 11 12 13
//20 21 22 23
//30 31 32 33
