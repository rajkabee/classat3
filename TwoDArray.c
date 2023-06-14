#include<stdio.h>
void main(){
    int arr[5], i, j;
    int num[]={5,3,1,6,8};
    int a[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    arr[0]=23;
    arr[1]=42;
    arr[2]=56;
    arr[3]=45;
    arr[4]=98;
    for(i=0; i<5; i++){
        printf("arr[%d]=%d\n", i, arr[i]);
        printf("num[%d]=%d\n", i, num[i]);
    }

    for(i=0; i<3; i++){


        for(j=0; j<3; j++){
            printf("%d\t", b[i][j]+a[i][j]);
        }
        printf("\n");
    }


}
