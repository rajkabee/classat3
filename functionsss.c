#include<stdio.h>
#include<conio.h>
int prime(int num){
    int i;
    for(i=2; i<=num/2; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}



void main(){
    int n, flag, d, p, b, res;
    printf("Enter the base: ");
    scanf("%d",&b);
    printf("Enter the power: ");
    scanf("%d", &p);
    res = power(b,p);
    printf("%d to the power %d = %d\n", b, p, res);

    printf("Enter a number: ");
    scanf("%d",&n);
    flag =prime(n);
    if(flag==0){
        printf("Composite\n");
    }
    else{
        printf("Prime\n");
    }
    d=digits(n);
    printf("No. of digits in %d is %d.\n", n,d);
    getch();
}

int digits(int num){
    int i=0;
    while(num!=0){
        num/=10;
        i++;
    }
    return i;
}

int power(int base, int pow){
    int res=1;
    while(pow!=0){
        res*=base;
        pow--;
    }
    return res;
}

int fact(int n){
    int res=1,i;
    while(n!=0){
        res*=n;
        n--;
    }
    /*
    for(i=1; i<=n; i++){
        res*=i;
    }
    */
    return res;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
