#include<stdio.h>
#include<conio.h>
void main(){
    int x=1;
    int sum=0;
    int range;
    printf("Enter a number: ");
    scanf("%d", &range);

    while(x<=range){
        sum+=x;
        x++;
    }
    printf("sum of %d natural numbers: %d",range, sum);
    getch();
}
