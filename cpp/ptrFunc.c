#include<stdio.h>
#include<conio.h>
void main(){
    int num = 123;
    printf("num = %d\n", num);
    incr(num);
    printf("after incr num = %d\n", num);
    increment(&num);
    printf("after the increment function num: %d\n", num);
    getch();
}

void incr(int num){
    num=num*10+4;
    printf("in incr num = %d\n", num);
}
void increment(short *ptr){
    *ptr = *ptr*10+4;
    printf("in the increment function num: %d\n", *ptr);
}
