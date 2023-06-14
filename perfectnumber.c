#include<stdio.h>
int main(){
    int num, i, sf=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=1;
    while(i<num){
        if(num%i==0){
            sf+=i;
        }
        i++;
    }
    if(num==sf){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
     return 0;
}
