#include<stdio.h>
void main(){
    int num, av;
    printf("Enter a number: ");
    scanf("%d", &num);
    av=armstrong(num);
    if(num==av){
        printf("Armstrong number!");
    }
    else{
        printf("Not a Armstrong Number!");
    }

}

int armstrong(int n){
    int d, av, rem;
    d=digits(n);
    //printf("%d",d);
    while(n>0){
        rem=n%10;
        av=av+power(rem, d);
        n=n/10;
    }
    return av;
}
int digits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int power(int b, int p){
    int res=1;
    while(p>0){
        res*=b;
        p--;
    }
    return res;
}
