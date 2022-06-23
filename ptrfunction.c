#include<stdio.h>
#include<conio.h>
void main(){
    int num = 5;
    incr(num);
    printf("after incr function call, num = %d\n", num);
    increment(&num);
    printf("after increment function call num = %d\n", num);
    getch();
}
void incr(int n){
    n+=40;
     printf("in function incr, n= %d\n", n);
}

void increment(int *address){
    *address+=40;
    printf("num from inside increment function: %d\n", *address);
}
