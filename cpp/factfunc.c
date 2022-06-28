#include<stdio.h>
#include<conio.h>
void main(){
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = sumn(num);
    printf("the sum of %d natural numbers = %d.", num, sum);
    getch();
}
int sumn(int n){
    int s=0;
    while(n!=0){
        s+=n;
        n--;
    }
    return s;
}
