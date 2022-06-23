#include<stdio.h>
#include<conio.h>
void main(){
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = naturalsum(n);
    printf("Sum : %d", sum);
    getch();
}
int naturalsum(int num){
    printf("num=%d\n", num);
    if(num<2){
        return num;
    }
    return num+naturalsum(num-1);
}
