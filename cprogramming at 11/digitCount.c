#inlcude<stdio.h>
#include<conio.h>
void main(){
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0){
        num/=10;
        count++;
    }

    printf("No. of digits: %d", count);

    getch();
}
