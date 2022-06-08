#include<stdio.h>
#include<conio.h>
void main(){
    int n,i, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact=1;
    i=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("Factorial: %d", fact);
    getch();
}

