#include<stdio.h>
#include<conio.h>
void main(){
    int a[10][10], b[10][10], p[10][10];
    int r1,r2,c1,c2, i,j,k;
    printf("Enter the size of the first matrix: \n");
    scanf("%d", &r1);
    scanf("%d", &c1);
    printf("Enter the size of the second matrix: \n");
    scanf("%d", &r2);
    scanf("%d", &c2);
    printf("Size of first matrix is %dX%d\n", r1,c1);
    printf("Size of second matrix is %dX%d\n", r2,c2);
    if(c1!=r2){
        printf("The matrices cannot be multiplied!\n ");
    }
    else{
        printf("Enter the values in the first matrix: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                printf("A[%d][%d] = ", i,j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("First Matrix: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }


        printf("Enter the values in the second matrix: \n");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                printf("B[%d][%d] = ", i,j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("First Matrix: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                p[i][j]=0;
                for(k=0; k<c1; k++){
                    p[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d\t", p[i][j]);
            }
            printf("\n");
        }

    }
    getch();
}
