#include<stdio.h>
#include<conio.h>
void main(){
    char name[50], rev[50];
    int count, i,j;
    printf("What is your name?\n -");
    scanf("%[^\n]s", &name);
    printf("Hello, %s",name);
    i=0;
    while(name[i]!='\0'){
        i++;
    }
    count=i;
    printf("No of characters: %d", count);
    j=0;
    rev[i]= name[i];
    i--;
    while(i>=0){
        rev[j] = name[i];
        j++;
        i--;
    }
    printf("Reversed: %s", rev);
    getch();
}
