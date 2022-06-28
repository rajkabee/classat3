#include<stdio.h>
#include<conio.h>
void incr(int x){
    x+=321;
}
void increment(int *ptr){
    *ptr+=321;
}

void main(){
    int n = 123;
    incr(n);
    printf("n after incr= %d\n", n);
    increment(&n);
    printf("n after increment= %d\n", n);
    getch();
}
