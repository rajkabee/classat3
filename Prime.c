#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=2;
    while(i<=(num/2)){
        if(num%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("Prime");
    }else{
        printf("composite");
    }

    getch();
}
