#include<stdio.h>
#include<conio.h>
void main(){
    int num, rem, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev=0;
    while(num!=0){
        rem = num%10;
        rev=rev*10+rem;
        num/=10;

    }
    printf("reverse: %d", rev);

}
