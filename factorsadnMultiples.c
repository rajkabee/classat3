#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,f;
    i=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("the factors are: ");
    while(i<=n){
        if(n%i==0){
            printf("\n%d", i);
        }
        i++;
    }
    printf("\nthe multiples are: ");
    i=1;
    while(i<=10){
        printf("\n%d", n*i);
        i++;
    }
}
