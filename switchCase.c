#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Enter your choice: \n a. Americano \n b. Mochaccino\n");
    printf(" c. Cappuccino \n d. Cafe Latte \n -");
    scanf(" %c", &ch);
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
        printf("Invalid choice...");
    }

    getch();
}
