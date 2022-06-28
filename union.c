#include<stdio.h>
#include<conio.h>
union{
    int i;
    char str[50];
    float f;
}u;


void main(){
    u.i = 123;
    printf("u.i = %d\n", u.i);
    strcpy(u.str, "Hello");
    printf("u.str = %s\n", u.str);
    u.f = 12.345f;
    printf("u.f = %f\n", u.f);

    printf("\n\n\n");

    printf("u.i = %d\n", u.i);
    printf("u.str = %s\n", u.str);
    printf("u.f = %f\n", u.f);
    getch();
}
