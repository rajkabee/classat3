#include<stdio.h>
#include<conio.h>
void main(){
    int a,b, lcm, tempa, tempb;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a,&b);
    tempa=a;
    tempb = b;
    while(a!=b){
       if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("HCF : %d \n", a);
    lcm = (tempa*tempb)/a;
    printf("LCM = %d \n", lcm);


    /*
    if(a>b){
        //swap
        a+=b;
        b=a-b;
        a-=b;
    }
    hcf=a;
    while(!(a%hcf==0&&b%hcf==0)){
        hcf--;
    }
    printf("HCF = %d", hcf);

    lcm=b;
    while(!(lcm%a==0&&lcm%b==0)){
        lcm++;
    }
    printf("LCM = %d", lcm);
    */
    getch();
}
