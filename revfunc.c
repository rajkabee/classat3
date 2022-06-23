#include<stdio.h>
#include<conio.h>
void main(){
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("The reversed value is: %d", rev);
    getch();
}

int reverse(int n){
    int r=0, rem;
    while(n!=0){
        rem = n%10;
        r = r*10+rem;
        n/=10;
    }
    return r;
}


int power(int base, int pow){
        int res=1;
        while(pow!=0){
            res*=base;
            pow--;
        }
        /*
        int i;
        for(i=1; i<=pow; i++){
            res*=base;
        }
        */
        return res;
}



