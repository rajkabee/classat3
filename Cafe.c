#include<stdio.h>
#include<conio.h>
void main(){
    char choice;
    printf("Enter your choice: \n");
    printf("a. Americano \nb. Mochaccino \nc. Cappuccino \nd. Hot Chocolate\n :-");
    scanf("%c", &choice);
    if(choice=='a'){
        printf("Americano is served!");
    }
    else if(choice=='b'){
        printf("Mochaccino is served!");
    }
    else if(choice=='c'){
        printf("Cappuccino is served!");
    }
    else if(choice=='d'){
        printf("Hot Chocolate is served!");
    }
    else{
        printf("Invalid Choice!");
    }




    getch();
}
