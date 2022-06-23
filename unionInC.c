#include<stdio.h>
#include<conio.h>
union var{
    int i;
    float f;
    char name[50];
} ;

void main(){
    union var u;
    u.i = 123;
    printf("u.i = %d\n", u.i);
    u.f = 4.321;
    printf("u.f = %f\n", u.f);
    strcpy(u.name, "kabiraj");
    printf("u.name = %s\n", u.name);
    printf("\n\n\n");
    printf("u.i = %d\n", u.i);
    printf("u.f = %f\n", u.f);
    printf("u.name = %s\n", u.name);
    getch();
}
