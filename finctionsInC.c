//function

#include<stdio.h>
#include<conio.h>
void main(){
    int x = 7;
    int y = 24;
    int z;
    z = add(x,y);
    printf("Sum: %d", z);
    getch();
}

int add(int a, int b){
    int c;
    c=a+b;
    return c;
}
