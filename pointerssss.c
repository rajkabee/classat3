#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    int *ptr;
    num=123;
    ptr = &num;

    printf("num = %d\n", num);
    printf("Address of num = %d\n", &num);
    printf("ptr = %d\n", ptr);
    printf("Address of ptr: %d\n", &ptr);
    printf("Value at the address pointed by ptr: %d\n", *ptr);
    *ptr*=100;
    printf("Value at the address pointed by ptr: %d\n", *ptr);
    printf("num = %d\n", num);
    getch();
}
