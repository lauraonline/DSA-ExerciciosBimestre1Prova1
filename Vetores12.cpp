#include <iostream>

using namespace std;

const int vetN = 5;
typedef int tvetor[vetN];

void inserirElementoNoVetor (tvetor vetor) {
    int V, P;
    cout<<"Insira o elemento a ser inserido:";
    cin>>V;
    cout<<"Insira a posição no vetor:";
    cin>>P;
    vetor[P] = V;
}

void excluirElementoNoVetor (tvetor vetor) {
    int P;
    cout<<"Insira a posição do elemento a ser excluído:";
    cin>>P;
    vetor[P] = 0;
}

void exibirVetor (tvetor vetor) {
    cout<<"Vetor:"<<endl;
    for(int i = 0; i < vetN; i++) {
        cout<<vetor[i]<<"\t";
    }
    cout<<endl;
}

int selecionarOpcaoNoMenu() {
    int opcao;
    cout<<"Selecione uma opção:"<<endl;
    cout<<"1 - Exibir vetor"<<endl;
    cout<<"2 - Inserir elemento no vetor"<<endl;
    cout<<"3 - Excluir elemento do vetor"<<endl;
    cout<<"0 - Sair"<<endl;
    cin>>opcao;
    return opcao;
}

int main() {
    tvetor vetor;
    int op;
    do {
        op = selecionarOpcaoNoMenu();
        switch (op) {
            case 1:
            exibirVetor(vetor);
            break;
            case 2:
            inserirElementoNoVetor(vetor);
            break;
            case 3:
            excluirElementoNoVetor(vetor);
            break;
        }
    } while (op != 0);
    return 0;
}