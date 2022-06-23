#include<stdio.h>
#include<conio.h>
void main(){
    int num, rem, fact, t, strong;
    printf("Enter a number: ");
    scanf("%d", &num);
    t=num;
    strong=0;
    while(t!=0){
        rem = t%10;
        fact=1;
        while(rem!=0){
            fact*=rem;
            rem--;
        }
        strong+=fact;
        t/=10;
    }
    if(strong==num){
        printf("strong");
    }else{
        printf("not strong");
    }
    getch();
}
