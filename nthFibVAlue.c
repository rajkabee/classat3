#include<stdio.h>
#include<conio.h>
int fib(int n){
    if(n<2){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
void main(){
    int n;
    printf("Enter the position of the fibonacci value: ");
    scanf("%d", &n);
    printf("The %dth fibonacci value is %d", n, fib(n-1));
}
