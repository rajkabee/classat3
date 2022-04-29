#include<stdio.h>
#include<conio.h>
void main(){
    int num, count, t;
    printf("Enter a number: ");
    scanf("%d", &num);
    t=num;
    count=0;
    while(num>0){
        num/=10;
        count++;
    }
    printf("Number of digits in %d is %d.", t, count);

    getch();
}
