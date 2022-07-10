#include<stdio.h>
#include<conio.h>
struct var{
    int i;
    float f;
    char str[50];
} v;
void main(){
    v.i = 123;
    printf("v.i = %d\n", v.i);
    v.f = 1.234f;
    printf("v.f = %0.3f\n", v.f);
    strcpy(v.str, "Dawa Pakhrin");
    printf("v.str = %s\n", v.str);

    printf("v.i = %d\n", v.i);
    printf("v.f = %0.3f\n", v.f);
    printf("v.str = %s\n", v.str);
    getch();
}
