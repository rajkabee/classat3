#include<stdio.h>
#include<conio.h>
void incr(int num){
        num+=100;
}

void main(){
    int num = 5;
    incr(num);
    printf("%d\t", num);

    getch();
}

