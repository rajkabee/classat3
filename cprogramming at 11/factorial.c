#include<stdio.h>
#include<conio.h>
void main(){
    int x=1;
    int p=1;
    int range;
    printf("Enter a number: ");
    scanf("%d", &range);

    while(x<=range){
        p*=x;
        x++;
    }
    printf("Product of %d natural numbers: %d",range, p);
    getch();
}

