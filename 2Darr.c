#include<stdio.h>
#include<conio.h>
void main(){
    int a[5] = {1,2,3,4,5};
    int num[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
    int i,j,k;



   for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", num[i][j]);
        }
        printf("\n");
   }


    getch();
}
