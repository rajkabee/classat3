#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("choose:\na. Gaming \nb. Mobile App");
    scanf("%c", &ch);
    if(ch=='a'){
        printf("You should learn C++");
    }
    else if(ch=='b'){
        printf("you chould learn Java");
    }
    else{
        printf("you should learn c first!");
    }

    getch();
}
