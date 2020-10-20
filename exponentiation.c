#include <stdio.h>
#include <math.h>

int exponentialCalculation(int base, int exponent);

int main(){

    int base, exponent, result;
    char option;

    do{
        system("cls");
        printf("========== Exponentiation =============\n\n");
        printf("Enter the base value: ");
        scanf("%i", &base);
        printf("Enter the exponent value: ");
        scanf("%i", &exponent);

        result = exponentialCalculation(base, exponent);
        printf("\nResult = %i\n\n", result);
        system("pause");

        printf("\nCalculate another exponentiation <Y/N>");
        scanf("%c ", &option);
        fflush(stdin);

    } while (option != 'n' && option != 'N');

    return 0;
}

int exponentialCalculation(int base, int exponent){
    if(exponent == 0){
        return 1;
    } else{
        if(exponent == 1){
            return base;
        } else{
            return (base * exponentialCalculation(base, exponent - 1));
        }
    }
}