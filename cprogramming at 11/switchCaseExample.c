#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Make a choice: \n");
    printf("a. Americano\n");
    printf("b. Mochaccino\n");
    printf("c. Cappuccion\n");
    printf("d. Cafe Latte\n");

    scanf("%c", &ch);

    switch(ch){
    case 'a':
        printf("Americano is served!");
        break;
    case 'b':
        printf("Mochaccino is served!");
        break;
    case 'c':
        printf("Cappuccino is served!");
        break;
    case 'd':
        printf("Cafe Latte is served!");
        break;
    default:
        printf("Invalid choice!");

    }

    getch();
}
