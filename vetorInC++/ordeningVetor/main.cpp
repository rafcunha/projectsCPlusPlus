#include <iostream>
#include <cstdlib> 

using namespace std;

#define MAXVALUE 10

void ordeningVetor(int numbers[MAXVALUE], int max){
    int aux = 0;
    for(int i = 0; i < max; i++){
        if(numbers[i] > numbers[i + 1]){
            aux = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = aux;
            i = -1;
        }
    }
    cout << "\n";
    for(int j = 0; j < max; j++){
        cout << numbers[j] << " ";
    }
}

int main(){
    int numbers[MAXVALUE];
    for(int i = 0; i < MAXVALUE; i++){
        numbers[i] = rand()%19 + 1;
        cout << numbers[i] << " ";
    }
    ordeningVetor(numbers, MAXVALUE);
}