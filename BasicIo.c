#include<stdio.h>
#include<conio.h>
int main(){
    //integer
    //byte b = 12;
    short s = 32767;
    printf("Short s: %d \n", s);
    unsigned int i;
    i= 4294967295;      //int are 32 bits long and first bit indicate the sign
    //unsigned values use all the 32 bits for value
    printf("unsigned int i : %u \n", i);

    long l = 9223372036854775807l;//long is 64 bits
    printf("long l: %d \n", l);
    /*
    multi
    line
    comment
    */

    //Float

    float flt = 1.234f; //32bits
    printf("Float f: %f \n", flt);

    double dbl = 2.234; //64bits
    printf("Double d: %.3f \n", dbl);


    i=flt;
    printf("unsigned int i : %u \n", i);

    //Character
    char ch;
    ch = 'g';
    printf("char ch: %c \n", ch);

    printf("Enter a number: ");
    scanf("%d", &i);
    printf("unsigned int i : %u \n", i);



    getch();
    return 0;
}
