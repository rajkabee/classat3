#include<stdio.h>
#include<conio.h>
void main(){
    int a, b,hcf,lcm, i, c, d;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    c=a;
    d=b;
    while(a%b!=0){
        i=a%b;
        a=b;
        b=i;
    }
    hcf = b;
    printf("HCF: %d\n", hcf);

    lcm = (c*d)/hcf;
    printf("LCM: %d", lcm);


    getch();
}
