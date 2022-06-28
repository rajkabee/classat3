#include<stdio.h>
#include<conio.h>
void main(){
    int num =123;
    int *ptr;
    ptr = &num;
    printf("num = %d\n", num);
    printf("address of num = %d\n", &num);
    printf("ptr = %d\n", ptr);
    printf("address of ptr = %d\n", &ptr);
    printf("value at the address pointed by ptr: %d", *ptr);
    getch();
}
