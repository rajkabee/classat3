#include<stdio.h>
#include<conio.h>
int digits(int num){
    int count = 0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}
void main(){
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    d = digits(n);
    printf("the no. of digits in %d is %d", n, d);
    getch();
}
