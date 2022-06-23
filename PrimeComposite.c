#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<=(num/2); i++){
        printf("%d\n", i);
        if(num%i==0){
            //composite
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d ia a composite number.", num);
    }else{
        printf("%d ia a prime number.", num);
    }
    getch();
}
