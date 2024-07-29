#include <iostream>

using namespace std;

struct ivet_t {
                int *valor;
                int quantidade;
                };
void showiVet (ivet_t *v);
/**
@brief adiciona mais um valor inteiro a variável tipo iVet
@param vetor que vai receber mais um item
@param valor do novo item
*/
void addiVet(ivet_t *v, int novoValor);

int main()
{

    ivet_t vetor;
    vetor.valor=new int(1);
    vetor.quantidade=1;

    vetor.valor[0]=1024;

    cout << "Vetor contem " << vetor.quantidade << " elementos\n" << endl;

    showiVet(&vetor);

    addiVet(&vetor,666);

    showiVet(&vetor);

    delete(vetor.valor);

}

void showiVet (ivet_t *v)
{
    for (int i=0;i<v->quantidade;i++)
        cout << v->valor[i] << "  ";

    cout <<endl;
}

void addiVet(ivet_t *v, int novoValor){
    int *temp = new int[v->quantidade + 1];
    for(int i = 0; i < v->quantidade; i++){
        temp[i] = v->valor[i];
    }
    temp[v->quantidade] = novoValor;
    delete(v->valor);
    v->valor = temp;
    v->quantidade++;
}