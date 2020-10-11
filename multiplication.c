#include<stdio.h>

int multiplication(int numberA, int numberB);

int main(){
    int numberA, numberB, result;
    char option;
    do{
        system("cls");
        printf("===== Multiplication calculation ======\n\n");
        printf("Value A: ");
        scanf("%i", &numberA);
        printf("Value B: ");
        scanf("%i", &numberB);
        result = multiplication(numberA, numberB);
        printf("\nResult: %i\n", result);
        system("pause");

        printf("\nCalculate another multiplication <Y/N>\n");
        scanf("%c ", &option);
        fflush(stdin);
    } while (option != 'n' && option != 'N');

    return 0;
}

int multiplication(int numberA, int numberB){
    if(numberB == 0){
        return 0;
    } else{
        return numberA + multiplication(numberA, numberB - 1);
    }
}