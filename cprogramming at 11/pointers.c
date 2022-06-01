#include<stdio.h>
#include<conio.h>
void main(){
    int n = 5;
    int *ptr;
    ptr = &n;
    printf("n = %d\n", n);
    printf("address of n: %d\n", &n);
    printf("ptr = %d\n", ptr);
    printf("Address of ptr = %d\n", &ptr);
    printf("Value at the address pointed by ptr: %d", *ptr);
    getch();
}
