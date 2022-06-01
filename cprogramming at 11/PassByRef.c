#include<stdio.h>
#include<conio.h>
void incr(int *ptr){
    *ptr+=100;
    printf("In the function a: %d\n", *ptr);
}
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    incr(&a);
    printf("After function a: %d\n", a);
    getch();
}
