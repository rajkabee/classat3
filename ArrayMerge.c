#include<stdio.h>
#include<conio.h>
void main(){
    int A[5]={5,4,3,2,1}, B[5]={10,9,8,7,6};
    int C[10];
    int i,j;
    i=0;
    j=0;
    while(j<5){
        C[i]=A[j];
        i++;
        j++;
    }
    j=0;
    while(j<5){
        C[i]=B[j];
        i++;
        j++;
    }
    for(i=0; i<10; i++){
        printf("%d\t", C[i]);
    }

    getch();
}
