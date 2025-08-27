#include <iostream>
#include <algorithm>

using namespace std;

const int vetN = 3;
const int numeroDeNotas = 4;
typedef string tstring[vetN];
typedef float tgradeNotas[vetN][numeroDeNotas];

void cadastrarNota (tstring &nome, tgradeNotas &nota) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Nome "<<i+1<<": ";
        cin>>nome[i];
        for (int j = 0; j < numeroDeNotas; j++) {
            cout<<"Nota "<<j+1<<": ";
            cin>>nota[i][j];
        }
    }
}
void exibirAlunosAprovados (tstring nome, tgradeNotas nota) {
    cout<<"Alunos aprovados:"<<endl;
    for (int i = 0; i < vetN; i++) {
        float soma = 0;
        for (int j = 0; j < numeroDeNotas; j++) {
            soma += nota[i][j];
        }
        float media = soma/numeroDeNotas;
        if (media >= 7) {
            cout<<nome[i]<<"\t Média: "<<media<<endl;
        }
    }
}
void exibirAlunosEmRecuperacao (tstring nome, tgradeNotas nota) {
    cout<<"Alunos em recuperação:"<<endl;
    for (int i = 0; i < vetN; i++) {
        float soma = 0;
        for (int j = 0; j < numeroDeNotas; j++) {
            soma += nota[i][j];
        }
        float media = soma/numeroDeNotas;
        if (media >= 5 && media < 7) {
            cout<<nome[i]<<"\t Média: "<<media<<endl;
        }
    }
}
void exibirAlunosReprovados (tstring nome, tgradeNotas nota) {
    cout<<"Alunos reprovados:"<<endl;
    for (int i = 0; i < vetN; i++) {
        float soma = 0;
        for (int j = 0; j < numeroDeNotas; j++) {
            soma += nota[i][j];
        }
        float media = soma/numeroDeNotas;
        if (media < 5) {
            cout<<nome[i]<<"\t Média: "<<media<<endl;
        }
    }
}
void exibirPercentualAlunosAprovados (tstring nome, tgradeNotas nota) {
    cout<<"Percentual de alunos aprovados:"<<endl;
    int numeroDeAlunosAprovados = 0;
    float percentual;
    for (int i = 0; i < vetN; i++) {
        float soma = 0;
        for (int j = 0; j < numeroDeNotas; j++) {
            soma += nota[i][j];
        }
        float media = soma/numeroDeNotas;
        if (media >= 7) {
            numeroDeAlunosAprovados++;
        }
    }
    percentual = (float)numeroDeAlunosAprovados / vetN * 100;
    cout<<percentual<<"%";
}

int main() {
    tstring nomes;
    tgradeNotas notas;
    cadastrarNota(nomes, notas);
    exibirAlunosAprovados(nomes, notas);
    exibirAlunosEmRecuperacao(nomes, notas);
    exibirAlunosReprovados(nomes, notas);
    exibirPercentualAlunosAprovados(nomes, notas);
    return 0;
}