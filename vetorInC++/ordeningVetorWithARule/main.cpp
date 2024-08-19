//nao consegui fazer funcionar com enum
#include <iostream>
#include <cstdlib> 

using namespace std;

#define MAXVALUE 10

enum VetOrdem_t {V_CRESCE = 1, V_DECRESCE = 0};

void ordeningVetor(int numbers[MAXVALUE], int max, int typeOfList){
    int aux = 0;

    if(typeOfList == 1){
        for(int i = 0; i < max; i++){
        if(numbers[i] > numbers[i + 1]){
            aux = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = aux;
            i = -1;
        }
    }
    }else if(typeOfList == 0){
        for(int i = 0; i < max; i++){
        if(numbers[i] < numbers[i + 1]){
            aux = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = aux;
            i = -1;
        }
    }
    }

    cout << "\n";
    for(int j = 0; j < max; j++){
        cout << numbers[j] << " ";
    }
}

int main(){
    int numbers[MAXVALUE], typeOfList;
    
    for(int i = 0; i < MAXVALUE; i++){
        numbers[i] = rand()%19 + 1;
        cout << numbers[i] << " ";
    }
    cout << "Qual a ordem de ordenamento que queres?\n0 - Decrescente\n1 - Crescente";
    cin >> typeOfList;

    ordeningVetor(numbers, MAXVALUE, typeOfList);
}