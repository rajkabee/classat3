#include<stdio.h>
#include<conio.h>
void main(){
    int b,p,res;
    printf("Enter the base: " );
    scanf("%d", &b);
    printf("Enter the power: ");
    scanf("%d", &p);
    res=1;
    while(p!=0){
        res*=b;
        p--;
    }
    printf("Result: %d", res);
    getch();
}
