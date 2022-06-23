#include<stdio.h>
#include<conio.h>
void main(){
    int num, t, rem, fact, stn=0;
    printf("Enter a number:");
    scanf("%d", &num);
    t=num;
    while(t!=0){
        rem = t%10;
        fact = 1;
        while(rem!=0){
            fact*=rem;
            rem--;
        }
        stn+=fact;
        t/=10;
    }
    if(num==stn){
        printf("%d is a strong number.", num);
    }
    else{
        printf("%d is not a strong number.", num);
    }
    getch();
}
/*
Strong number:
145
1!+4!+5!
1+24+120
145


*/
