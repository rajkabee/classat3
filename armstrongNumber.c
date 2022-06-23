#include<stdio.h>
#include<conio.h>
int digits(int n);
int power(int b, int p);
void main(){
    int num, dig, temp, rem, arm;
    printf("Enter a number: ");
    scanf("%d", &num);
    dig = digits(num);
    printf("number of digits in %d: %d\n", num, dig);
    temp = num;
    arm=0;
    while(temp!=0){
        rem=temp%10;
        arm+=power(rem, dig);
        temp/=10;
    }
    if(num==arm){
        printf("%d is a armstrong number.", num);
    }
    else{
        printf("%d is a not armstrong number.", num);
    }
    getch();
}
int digits(int n){
    int i=0;
    while(n!=0){
        n/=10;
        i++;
    }
    return i;
}
int power(int b, int p){
    int result=1;
    while(p!=0){
        result*=b;
        p--;
    }
    return result;
}


