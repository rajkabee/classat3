#include<stdio.h>
#include<conio.h>
void main(){
    int i=1, sum=1;
    while(i<=10){
        //printf("%d\n", i);
        sum*=i;
        i++;
    }
    printf("Product of 10 natural numbers: %d", sum);

    getch();
}
