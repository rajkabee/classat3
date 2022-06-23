#include<stdio.h>
#include<conio.h>
void main(){
    int bin,dec, rem, t;
    printf("Enter a Binary value: ");
    scanf("%d", &bin);
    //10110
    t=1;
    dec = 0;
    while(bin!=0){
        rem = bin%10;   //1
        dec+=rem*t;     //22
        t*=2;           //32
        bin/=10;        //0
    }
    printf("Decimal Value: %d",dec);




    getch();
}
