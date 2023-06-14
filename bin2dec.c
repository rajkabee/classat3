#include<stdio.h>
void main(){
    int bin, dec=0, rem, p2=1;
    printf("Enter a binary number: ");
    scanf("%d", &bin); //1011011=1*2^0+1*2^1+0*2^2+....
    while(bin>0){
        rem= bin%10;
        dec = dec+rem*p2;
        p2=p2*2;
        bin/=10;
    }
    printf("Decimal Value: %d", dec);
}
