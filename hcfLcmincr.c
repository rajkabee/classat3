#include<stdio.h>
#include<conio.h>
void main(){
    int a, b, temp, hcf, lcm,i, n1,n2;
    printf("Enter a number: ");
    scanf("%d%d", &a, &b);
    n1=a;
    n2=b;
    while(!(n1%n2==0)){
        n1=n1%n2;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    hcf = n2;

    lcm =(a*b)/hcf;
    printf("HCF: %d\n", hcf);
    printf("lcm: %d", lcm);
}
