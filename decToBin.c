#include<stdio.h>
#include<conio.h>
void main(){
    int dec, rem, bin, rev;
    printf("Enter a decimal Value: ");
    scanf("%d", &dec);
    rev=1;
    while(dec!=0){
        rem = dec%2;
        rev = rev*10+rem;
        dec/=2;
    }
    bin=0;
    while(rev!=0){
        rem=rev%10;
        bin=bin*10+rem;
        rev/=10;
    }
    bin/=10;
    printf("Binary Value: %d", bin);
    getch();
}
