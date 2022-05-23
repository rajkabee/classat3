#include<stdio.h>
#include<conio.h>
int fib (int);
void main(){
    int n, val;
    printf("Enter the position: ");
    scanf("%d", &n);
    val = fib(n-1);
    printf("Value: %d", val);
    getch();
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
