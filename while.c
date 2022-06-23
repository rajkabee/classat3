#include<stdio.h>
#include<conio.h>
void main(){
    int i, n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    i=1;


    sum=1;
    while(i<=n){
        sum*=i;
        i++;
    }
    printf("factorial of %d : %d", n, sum);
    getch();
}
