#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    for(i=1; i<=20; i++){
        printf("\n: %d", fib(i-1));
    }


    getch();
}

int fib(int x){
    if(x<2){
        return x;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}
