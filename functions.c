#include<stdio.h>
#include<conio.h>
int add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}
int diff(){
    int x,y,dif;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
    dif = x-y;
    return dif;
}

float pi(){
    return 3.1415f;
}

void product(int a, int b){
    int p;
    p=a*b;
    printf("\nProduct: %d", p);
}
void divide(){
    int x,y,q;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
    q=x/y;
    printf("Quotient: %d", q);
}
void main(){
    int x,y,summ;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
    summ=add(x,y);
    product(x,y);
    printf("\nSum: %d", summ);
    printf("\n Pi : %f", pi());
    divide();
    getch();
}



