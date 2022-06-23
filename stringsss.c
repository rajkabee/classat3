#include<stdio.h>
#include<conio.h>
void main(){
    char first[50], second[50];
    int l=0;
    printf("Enter your name: ");
    scanf("%[^\n]s", &first);
    while(first[l]!='\0'){
        second[l]=first[l];
        l++;
    }
    second[l]='\0';
    printf("Length of the string: %d\n", l);
    printf("Second String:  %s!\n", second);
    getch();
}
