#include<stdio.h>

int sum(int v[], int numberOfNumbers);

int main(){

    int vector[6] = {9, 5, 1, 3, 8, 4}, result, i, numberOfNumbers = 6;

    printf("========= Sum numbers vector =========\n\n");

    for (i = 0; i < numberOfNumbers; i++){
        printf("vector[%i] = %i\n", i, vector[i]);
    }
    result = sum(vector, 6);
    printf("\n\nResult = %i", result);

    return 0;
}

int sum(int vector[], int numberOfNumbers){
    if(numberOfNumbers == 1){
        return vector[0];
    } else{
        return (vector[numberOfNumbers - 1] + sum(vector, numberOfNumbers - 1));
    }
}