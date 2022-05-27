#include<stdio.h>
#include<conio.h>
void main(){
    int b, p, res;
    printf("Enter the base and the power: ");
    scanf("%d%d", &b, &p);
    res = 1;
    while(p!=0){
        res*=b;
        p--;
    }
    printf("Result: %d", res);
    getch();
}
