#include<stdio.h>
#include<conio.h>
int digits(int n){
    int d=0;
    while(n!=0){
        d++;
        n/=10;
    }
    return d;
}

int sumNatural(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sumNatural(n-1);
    }
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
fibonacci(int pos){
    if(pos<2){
        return pos;
    }
    else{
        return fibonacci(pos-1)+fibonacci(pos-2);
    }
}


void main(){
    int num, dig, sumn, fact;
    int fib, pos;
    printf("Enter the position of the fibonacci value: ");
    scanf("%d", &pos);
    fib = fibonacci(pos);
    printf("%dth fibonacci value is %d\n", pos, fib);
    printf("Enter a number: ");
    scanf("%d", &num);
    dig = digits(num);
    printf("the no. of digits in %d is %d\n", num, dig);
    sumn = sumNatural(num);
    printf("Sum of %d natural numbers: %d\n",num, sumn );
    fact = factorial(num);
    printf("Factorial of %d : %d\n",num, fact);
    getch();
}
