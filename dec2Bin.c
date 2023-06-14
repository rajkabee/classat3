#include<stdio.h>
void main(){
    int dec, bin=0, rem, rbin=1;
    printf("Enter a number: ");
    scanf("%d", &dec);
    while(dec>0){
        rem=dec%2;
        rbin=rbin*10+rem;
        dec/=2;
    }
    while(rbin>1){
        rem=rbin%10;
        bin = bin*10+rem;
        rbin/=10;
    }
    printf("Binary Value: %d", bin);



}
