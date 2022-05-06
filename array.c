#include<stdio.h>
#include<conio.h>

void main(){
    int num[]={5,4,3,2,1};
    int i,temp,j,k;

    for(k=0;k<4;k++){
        for(i=0;i<4-k;i++){
        if(num[i]>num[i+1]){
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
        }
        printf("\n");
        for(j=0;j<5;j++){
            printf("%d ",num[j]);
        }

    }
    }
    for(j=0;j<5;j++){
            printf("%d ",num[j]);
        }

    getch();

}
