#include<stdio.h>
#include<conio.h>
void increment(int *ptr){
    *ptr+=100;
}
void main(){
    int n=5;
    increment(&n);
    printf("%d", n);
}
