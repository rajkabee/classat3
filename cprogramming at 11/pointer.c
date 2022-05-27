#include<stdio.h>
#include<conio.h>
void main(){
    int n=5;
    int *ptr;
    ptr = &n;

    printf("The value of n: %d\n", n);
    printf("The address of n: %d\n", &n);
    printf("The value of ptr: %d\n", ptr);
    printf("The address of ptr: %d\n", &ptr);
    printf("Value at the address pointed by ptr: %d", *ptr);


	getch();
}
