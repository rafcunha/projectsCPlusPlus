#include <iostream>

using namespace std;

struct ivet_t {
                int *valor;
                int quantidade;
                };

void addiVet(ivet_t *v){
    int newValue;
    cout << "Qual a quantidade de televisores na residencia? ";
    cin >> newValue;

    int *temp = new int[v->quantidade + 1];
    for(int i = 0; i < v->quantidade; i++){
        temp[i] = v->valor[i];
    }
    temp[v->quantidade] = newValue;
    delete(v->valor);
    v->valor = temp;
    v->quantidade++;
}

void dailyReport();

int main(){
    bool running = true;
    ivet_t vetor;
    vetor.valor=new int[1];
    vetor.quantidade=0;

    do{
        int menu;

        cout << "BEM VINDO AO SISTEMA DE IMPLEMENTACAO DE TELEVISORES RESIDENCIAIS\n";
        cout << "Selecione a opcao abaixo: \n";
        cout << "1 - Adicionar Questionario\n";
        cout << "2 - Ver Relatorio Diario\n";
        cout << "3 - Sair do Programa\n";
        cin >> menu;

        switch(menu){
            case 1:
                addiVet(&vetor);
                cout << "Quantidade de valores recebidos: " << vetor.quantidade << "\n" << endl;
                cout << "Valores registrados\n";
                for(int i = 0; i < vetor.quantidade; i++){
                    cout << i + 1 << ":" <<  " " << vetor.valor[i] << "\n";
                }
                
                
                cout << "\n";
                break;
            case 2:

            case 3:
                running = false;
                break;
            default:
                cout << "Opcao Invalida\n\n";
                break;
        }
    }while(running);
}