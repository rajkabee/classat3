#include<stdio.h>
#include<conio.h>
void main(){
    int num = 123;
    int *ptr = &num;
    *ptr *=199;
    printf("num = %d\n", num);
    printf("address of num = %d\n", &num);


    printf("ptr= %d\n", ptr);
    printf("&ptr = %d\n", &ptr);
    printf("Value at the address pointed by ptr: %d", *ptr);
    getch();
}
