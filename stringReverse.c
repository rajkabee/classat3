#include<stdio.h>
#include<conio.h>
void main(){
    char str[50], rev[50];
    int i,j,l;
    printf("Enter a word: ");
    scanf("%s", &str);
    l=0;
    while(str[l]!='\0'){
        l++;
    }
    rev[l] = str[l];
    l--;
    i=0;
    while(l>=0){
        rev[i]=str[l];
        i++;
        l--;
    }
    printf("Reversed word: %s", rev);
    printf("\n-%s", strrev(str));

    getch();
}
