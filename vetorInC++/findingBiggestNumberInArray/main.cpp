#include <iostream>
#include <cstdlib> 

using namespace std;

#define MAXVALUE 10

int findingBiggestNumberInArray(int numbers[MAXVALUE], int max){
    int biggestNumber = 0;
    for(int i = 0; i < max; i++){
        if(biggestNumber < numbers[i]){
            biggestNumber = numbers[i];
        
        }
    }
    return biggestNumber;
}

int main(){
    int numbers[MAXVALUE];
    for(int i = 0; i < MAXVALUE; i++){
        numbers[i] = rand()%19 + 1;
        cout << numbers[i] << " ";
    }
    cout << "\n" << findingBiggestNumberInArray(numbers, MAXVALUE);
}