#include<stdio.h>
#include<conio.h>
void main(){
    short st;
    long lg;
    short *ptrsh;
    long *ptrlg;
    ptrsh = &st;
    ptrlg = &lg;
    printf("short: %d\n", ptrsh);
    printf("short: %d\n", ptrsh+1);
    printf("long: %d\n", ptrlg);
    printf("long: %d", ptrlg+1);
}
