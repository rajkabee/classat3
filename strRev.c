#include<stdio.h>
#include<conio.h>
void main(){
    char str[50], rev[50];
    int i,j;
    printf("Enter a Word: ");
    scanf(" %s", &str);
    i=0;
    while(str[i]!='\0'){
        i++;
    }
    rev[i]=str[i];              //copy null value
    j=0;
    i--;
    while(i>=0){

        rev[j]=str[i];
        j++;
        i--;
    }
    printf("Reversed String : %s", rev);
}
