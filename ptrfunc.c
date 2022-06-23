#include<stdio.h>
#include<conio.h>
void main(){
    int num = 5, i=100, y=234;
    incr(&num, &i,&y);
    printf("num = %d\n", num);
    printf("i = %d\n", i);
    printf("y = %d\n", y);
    getch();
}

void incr(int *ptr, int *ptri, int *ptry){
    *ptr+=100;
    *ptri+=100;
    *ptry*=12;
}
