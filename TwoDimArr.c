#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][5] = {{1,2,3,4,5},{3,4,5,6,7}, {5,6,7,8,9}};
     int b[3][5] = {{1,2,3,4,5},{3,4,5,6,7}, {5,6,7,8,9}};
      int sum[3][5];

    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            sum[i][j] = a[i][j]+b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    getch();
}
