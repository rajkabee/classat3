#include<stdio.h>
#include<conio.h>
void main(){
    char choice;
    printf("Enter your choice: \n");
    printf("a. Americano \nb. Mochaccino \nc. Cappuccino \nd. Hot Chocolate\n :-");
    scanf("%c", &choice);

    switch(choice){
    case 'a':
        printf("Americano is served!");
        break;
    case 'b':
        printf("Mochaccino is served!");
        break;
    case 'c':
        printf("Cappuccion is served!");
        break;
    case 'd':
        printf("Hot Chocolate is served!");
        break;
    default:
        printf("Invalid Choice!");
    }



    getch();
}

