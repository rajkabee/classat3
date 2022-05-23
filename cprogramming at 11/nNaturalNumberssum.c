#include<stdio.h>
#include<conio.h>
int naturalSum(int num);
int fact(int num);
void main(){
    int n, sum, prod;
    printf("Enter the range: ");
    scanf("%d", &n);
    sum = naturalSum(n);
    prod = fact(n);
    printf("Sum of %d natural numbers: %d \n", n,sum);
    printf("product of %d natural numbers: %d \n", n,prod);

    getch();
}

int naturalSum(int num){
    int i, sum=0;
    for(i=1; i<=num; i++){
        sum+=i;
    }
    return sum;

}

int fact(int num){
    int i, p = 1;
    for(i=1; i<=num; i++){
        p*=i;
    }
    return p;

}
