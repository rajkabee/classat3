#include<stdio.h>
#include<conio.h>
void main(){
    int n,i, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum=0;
    i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum: %d", sum);
    getch();
}
