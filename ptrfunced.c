#include<stdio.h>
#include<conio.h>

void incr(int num){
    num++;
}
void incrptr(int *ptr){
    (*ptr)++;
}
void main(){
    int num=123;
    incr(num);
    printf("num = %d\n", num);
    incrptr(&num);
    printf("num = %d\n", num);

    getch();
}
