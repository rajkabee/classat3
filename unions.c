#include<stdio.h>
#include<conio.h>
struct var{
    int i;
    char name[50];
    float f;
} x;

void main(){
    struct var y;
    y.i=123;
    printf("y.i = %d\n", y.i);
    strcpy(y.name, "Sunil");
    printf("y.name = %s\n", y.name);
    y.f = 1.234;
    printf("y.f = %f\n", y.f);
    printf("\n\n\n");

    printf("y.i = %d\n", y.i);
    printf("y.name = %s\n", y.name);
    printf("y.f = %f\n", y.f);
    getch();
}
