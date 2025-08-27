#include <iostream>
#include <algorithm>

using namespace std;

const int N = 5;
const int vetN = N;
typedef string tstring[vetN];
typedef int tint[vetN];
typedef char tchar[vetN];

void cadastrarPessoas(tstring &nome, tint &idade, tchar &sexo) {
    for (int i = 0; i < vetN; i++) {
        cout<<"Nome "<<i+1<<": ";
        cin>>nome[i];
        cout<<"Idade "<<i+1<<": ";
        cin>>idade[i];
        cout<<"Sexo "<<i+1<<" (M/F): ";
        cin>>sexo[i];
    }
}
void exibirCadastros (tstring nome, tint idade, tchar sexo) {
    cout<<"Cadastros:"<<endl;
    for (int i = 0; i < vetN; i++) {
        cout<<"Nome: "<<nome[i]<<"\t Idade:"<<idade[i]<<"\t Sexo: "<<sexo[i]<<endl;
    }
    cout<<endl;
}
void exibirCadastroPessoasMaisVelhasQueAPrimeira(tstring nome, tint idade, tchar sexo) {
    int idadePrimeiraPessoa = idade[0];
    cout<<"Pessoas cuja idade seja maior que a idade da primeira pessoa:"<<endl;
    for (int i = 0; i < vetN; i++) {
        if (idade[i] > idadePrimeiraPessoa) {
            cout<<"Nome: "<<nome[i]<<"\t Idade:"<<idade[i]<<"\t Sexo: "<<sexo[i]<<endl;
        }
    }
    cout<<endl;
}

void exibirCadastroMulheres(tstring nome, tint idade, tchar sexo) {
    cout<<"Mulheres:"<<endl;
    for (int i = 0; i < vetN; i++) {
        if (sexo[i] == 'F') {
            cout<<"Nome: "<<nome[i]<<"\t Idade:"<<idade[i]<<"\t Sexo: "<<sexo[i]<<endl;
        }
    }
    cout<<endl;
}

void exibirCadastroHomensMenosDe21Anos(tstring nome, tint idade, tchar sexo) {
    cout<<"Homens com menos de 21 anos:"<<endl;
    for (int i = 0; i < vetN; i++) {
        if (sexo[i] == 'M' && idade[i] < 21) {
            cout<<"Nome: "<<nome[i]<<"\t Idade:"<<idade[i]<<"\t Sexo: "<<sexo[i]<<endl;
        }
    }
    cout<<endl;
}

int main() {
    tstring nome;
    tint idade;
    tchar sexo;
    cadastrarPessoas(nome, idade, sexo);
    exibirCadastros(nome, idade, sexo);
    exibirCadastroPessoasMaisVelhasQueAPrimeira(nome, idade, sexo);
    exibirCadastroMulheres(nome, idade, sexo);
    exibirCadastroHomensMenosDe21Anos(nome, idade, sexo);
    return 0;
}