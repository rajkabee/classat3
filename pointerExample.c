#include<stdio.h>
#include<conio.h>
void main(){
    int num=5;
    int *ptr;
    ptr=&num;
    printf("value of num: %d\n", num);
    printf("Address of num: %d\n", &num);
    printf("Value of ptr: %d\n", ptr);
    printf("Value at the address pointed by ptr: %d\n", *ptr);
    incr(num);
    printf("value of num: %d\n", num);
    increment(&num);
    printf("value of num: %d\n", num);
    getch();
}

void incr(int n){
    n++;
    printf("value of n: %d\n", n);
}
void increment(int *ptr){
    *ptr+=1;
    printf("value at ptr: %d\n", *ptr);
}
