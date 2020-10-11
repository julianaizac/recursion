#include<stdio.h>

int factorialCalculation(int number);

int main(){
    int number, result;
    char option;

    do{
        system("cls");
        printf("======== Factorial calculation ========\n\nEnter a number: ");
        scanf("%i", &number);

        result = factorialCalculation(number);
        printf("Result: %i\n", result);
        system("pause");

        printf("\nCalculate another factorial <Y/N>");
        scanf("%c ", &option);
        fflush(stdin);

    } while (option != 'n' && option != 'N');
    
    return 0;
}

int factorialCalculation(int number){
    if(number == 0){
        return 1;
    } else{
        return number * factorialCalculation(number - 1);
    }
}