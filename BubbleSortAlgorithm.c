
#include<stdio.h>
void main(){

    int a[]={5,4,3,2,1};
    int i,j, t, k;
    for(i=0; i<4; i++){
        for(j=0; j<4-i; j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            for(k=0; k<5; k++){
                printf("%d\t", a[k]);
            }
            printf("\n");
        }
    }




}
