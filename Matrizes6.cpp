#include <iostream>

using namespace std;

const int matI = 3;
const int matJ = 20;
typedef float tMatNotas[matI][matJ];

void preencherMatriz(tMatNotas matriz) {
    for (int j = 0; j < matJ; j++) {
        cout<<"Aluno "<<j+1<<":"<<endl;
        for (int i = 0; i < matI; i++) {
            cout<<"Nota "<<i+1<<": ";
            cin>>matriz[i][j];
        }
        cout<<endl;
    }
}

float MediaDoAlunoN (tMatNotas matriz, int N) {
    float soma = 0;
    for (int i = 0; i < matI; i++) {
        soma += matriz[i][N-1];
    }
    return soma/matI;
}

float MediaDaTurmaNaAvaliacaoN (tMatNotas matriz, int N) {
    float soma = 0;
    for (int j = 0; j < matJ; j++) {
        soma += matriz[N-1][j];
    }
    return soma/matJ;
}

void exibirAlunoMaiorMedia (tMatNotas matriz) {
    float medias[matJ];
    for (int j = 0; j < matJ; j++) {
        float soma = 0;
        for (int i = 0; i < matI; i++) {
            soma += matriz[i][j];
        }
        medias[j] = soma/matI;
    }
    float maiorMedia = medias[0];
    int alunoMaiorMedia = 1;
    for (int j = 0; j < matJ; j++) {
        if (medias[j] > maiorMedia) {
            maiorMedia = medias[j];
            alunoMaiorMedia = j+1;
        } 
    }
    cout<<"Maior média: "<<maiorMedia<<", aluno "<<alunoMaiorMedia<<endl;
}
void exibirAlunoMenorNota(tMatNotas matriz) {
    float menor = matriz[0][0];
    int alunoMenorNota = 1;
    for (int j = 0; j < matJ; j++) {
        for (int i = 0; i < matI; i++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                alunoMenorNota = j+1;
            }
        }
    }
    cout<<"Menor nota: "<<menor<<", aluno "<<alunoMenorNota<<endl;
}

main() {
    tMatNotas matNotas;
    preencherMatriz(matNotas);
    cout<<"Média do 3º aluno: "<<MediaDoAlunoN(matNotas, 3)<<endl;
    cout<<"Media da 1ª avaliação: "<<MediaDaTurmaNaAvaliacaoN(matNotas, 1)<<endl;
    cout<<"Media da 2ª avaliação: "<<MediaDaTurmaNaAvaliacaoN(matNotas, 2)<<endl;
    cout<<"Media da 3ª avaliação: "<<MediaDaTurmaNaAvaliacaoN(matNotas, 3)<<endl;
    exibirAlunoMaiorMedia(matNotas);
    exibirAlunoMenorNota(matNotas);
}