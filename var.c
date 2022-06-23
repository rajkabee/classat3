#include<stdio.h>
#include<conio.h>
void main(){
    unsigned short s;
    s = 65535;
    printf("%d\n", s);

    int i = 2140000000;
    printf("%d\n", i);

    long long l = 9223372036854775805;
    printf("l = %d", sizeof(l));
    printf("l = %d", l);

    float f = 123.127f;
    printf("\n%.2f", f);

    double d = 123.123;
    printf("\n%f", d);


    char ch = 'A';
    printf("\n%d", ch);


    getch();
}
