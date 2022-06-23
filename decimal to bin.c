#include<stdio.h>
#include<conio.h>
void main(){
    int dec,bin,rem,sample;
    printf("Enter the binary number:");
    scanf("%d",&bin);
    sample = 1;
    dec=0;
    while(bin!=0){
        rem = bin%10;
        dec+=rem*sample;
        sample*=2;
        bin/=10;
    }

    printf("the value of decimal:%d\n", dec);
    getch();

}
