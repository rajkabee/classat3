#include<stdio.h>
#include<conio.h>
void main(){
    char name[5][50];
    int i;
    printf("Enter the 5 student's name:\n");
    for(i=0; i<5; i++){
        printf("1. ");
        scanf(" %[^\n]s", &name[i]);
    }
    printf("The names are: \n");
    for(i=0; i<5; i++){
        printf("%d. %s\n",i+1, name[i]);
    }
    getch();
}
