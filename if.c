#include<stdio.h>
#include<conio.h>
void main(){
    char choice;
    printf("your choices are: \n a. Cold drink\n b. hot drink\n :-");
    scanf("%c", &choice);
    if(choice=='a'){
        printf("You got a coke!");
    }else if(choice=='b'){
        printf("let me make you a cappuccino!");
    }else{
        printf("Invalid choice!");
    }

    getch();
}
