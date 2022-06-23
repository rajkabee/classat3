
#include<stdio.h>
#include<conio.h>
void main(){
    int num[5] = {9,8,7,6,5};
    int i,j,k;
    for(i=0; i<=3; i++){
        for(j=0; j<=3-i; j++){
            if(num[j]>num[j+1]){
                num[j]+=num[j+1];
                num[j+1]= num[j]-num[j+1];
                num[j]-=num[j+1];
            }
        }
    }
    for(k=0; k<5; k++){
        printf("%d\t", num[k]);
    }
    printf("\n");

    getch();
}

/*
a=5;
b=7;
a+=b;   12;
b=a-b;  5;
a-=b;   7
*/
