#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    addMatrix(&a,&b);
    getch();
}
void addMatrix(int *a, int *b){
    int i,j;
    int s[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            s[i][j]=*(a+3*i+j)+*(b+3*i+j);
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
}


