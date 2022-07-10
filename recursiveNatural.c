#include<stdio.h>
#include<conio.h>

int sumOfNatural(int n){
    if(n==1){
        return 1;
    }
    return n+sumOfNatural(n-1);
}
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of %d nautral numbers is %d.", num, sumOfNatural(num));
}
