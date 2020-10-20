#include<stdio.h>

void moveTower(int numberOfDiscs, char source, char destiny, char subsidiary);

int main(){

    int numberOfDiscs;
    char option;

    do{
        system("cls");
        printf("============== Hanoi Tower ============\n\n");
        printf("Enter the number of disks: ");
        scanf("%i", &numberOfDiscs);

        printf("\nCalculate with another quantity of disks <Y/N>");
        scanf("%c ", &option);
        fflush(stdin);
    } while (option != 'n' || option != 'N');

    return 0;
}

void moveTower(int numberOfDiscs, char source, char destiny, char subsidiary){

    if(numberOfDiscs == 1){
        printf("Move disk 1 from tower %c to tower %c", source, destiny);
    }
    moveTower(numberOfDiscs - 1, source, subsidiary, destiny);
    printf("Move disk %i from tower %c to tower %c", numberOfDiscs, source, destiny);
    moveTower(numberOfDiscs - 1, subsidiary, destiny, source);
}