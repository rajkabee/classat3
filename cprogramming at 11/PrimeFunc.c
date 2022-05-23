#include<stdio.h>
#include<conio.h>
int prime(int);
void main(){
    int num, flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    flag = prime(num);
    if(flag==0){
        printf("%d is a prime number.", num);
    }
    else{
        printf("%d is a composite number.",num);
    }

    getch();
}

int prime (int n){
    int i, flag=0;
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            return 1;
        }
        printf("i = %d\n", i);
    }
    return 0;
}
