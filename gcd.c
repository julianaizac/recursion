#include<stdio.h>

int gcd(int numberA, int numberB);

int main(){
    int numberA, numberB, result;
    char option;

    do{
        system("cls");
        printf("======= Greatest Common Divisor =======\n\n");
        printf("Value A: ");
        scanf("%i", &numberA);
        printf("Value B: ");
        scanf("%i", &numberB);
        result = gcd(numberA, numberB);
        printf("\nResult: %i\n", result);
        system("pause");

        printf("\nCalculate another GCD <Y/N>");
        scanf("%c ", &option);
        fflush(stdin);
    } while (option != 'n' && option != 'N');

    return 0;
}

int gcd(int numberA, int numberB){
    if(numberB == 0){
        return numberA;
    }
    return gcd(numberB, numberA % numberB);
}