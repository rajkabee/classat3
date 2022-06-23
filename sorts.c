#include<stdio.h>
#include<conio.h>
void main(){
    int num[5] = {5,4,3,2,1};
    int i, j, k;
    for(i=0; i<4; i++)
    for(j=0; j<4-i; j++){
        if(num[j]>num[j+1]){
            //swap
            k=num[j];
            num[j]=num[j+1];
            num[j+1]= k;
        }
        for(k=0; k<5; k++){
            printf("%d\t", num[k]);
        }
        printf("\n");
    }



    getch();
}
