#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], b[10][10], p[10][10];
    int r1,c1,r2,c2, i, j,k;
    printf("Enter the size of the first matrix: \nRows: ");
    scanf("%d", &r1);
    printf("Columns: ");
    scanf("%d", &c1);
    printf("Enter the size of the second matrix: \nRows: ");
    scanf("%d", &r2);
    printf("Columns: ");
    scanf("%d", &c2);
    if(c1!=r2)
    {
        printf("The matrices cannot be multiplied! ");
    }
    else
    {
        printf("Enter the elements of the matrix A: \n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("A[%d][%d] = ", i,j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix A: \n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("Enter the elements of the matrix B: \n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("B[%d][%d] = ", i,j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("Matrix B: \n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        printf("\nProduct Matrix: \n");//size of product matrix: r1Xc2

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
