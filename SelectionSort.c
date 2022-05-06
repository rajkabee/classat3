#include<stdio.h>
#include<conio.h>
void main(){
    int num[] = {5,4,3,2,1};
    int i,j,temp;


    for(i=0; i<4; i++){
        for(j=i+1; j<5; j++){
            if(num[i]>num[j]){
                num[i]+=num[j];
                num[j]=num[i]-num[j];
                num[i]-=num[j];
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d   ", num[i]);
    }

    getch();
}
/*
a=5; 12; 7;
b=7; 5;
a+=b;
b = a-b;
a-=b;
*/
