#include<stdio.h>
#include<conio.h>
void main(){
    int num = 5;
    int *ptr;
    ptr = &num;


    printf("num = %d\n", num);
    printf("&num = %d\n", &num);
    printf("ptr = %d\n", ptr);
    printf("&ptr = %d\n", &ptr);
    printf("value at the address pointed by ptr: %d", *ptr);
    getch();
}
