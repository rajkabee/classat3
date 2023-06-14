#include<stdio.h>
void main(){

    int x = 234;
    int *ptr;
    ptr=&x;

    printf("the value of x: %d\n", x);
    printf("the address of x: %d\n", &x);
    printf("the value of ptr: %d\n", ptr);
    printf("the address of ptr: %d\n", &ptr);
    printf("The value at the address pointed by ptr: %d\n", *ptr);
    *ptr+=100;
    printf("the value of x: %d\n", x);

    printf("The value at the address pointed by ptr: %d\n", *ptr);

}
