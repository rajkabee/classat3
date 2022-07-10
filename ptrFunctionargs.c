#include<stdio.h>
#include<conio.h>
void myFunction(int *a, int *b){
    *a+=100;
    *b+=200;
}

void main(){
    int x = 5, y = 7;
    myFunction(&x, &y);
    printf("X  %d\nY = %d\n", x,y);
    getch();
}
