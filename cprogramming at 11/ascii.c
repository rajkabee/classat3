#include<stdio.h>
#include<conio.h>
void main(){
    short x;
    int i;
    long l;
    float f;
    double d;

    x=32767;
    printf("%d", x);

    printf("\n");
    i=2147483647;
    printf("%d", i);

    printf("\n");
    l=9223372036854775807;
    printf("%d", l);


    f = 123.456f;
    d = 456.789;

    printf("\n%0.2f", f);
    printf("\n%0.3f", d);




    getch();
}
