#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }

    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }

    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<=4-i; j++)
        {
            printf("*\t");
        }

        printf("\n\n");
    }


    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<=3-i; j++)
        {
            printf(" \t");
        }
        for(j=0; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }


    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i-1; j++)
        {
            printf(" \t");
        }
        for(j=0; j<=4-i; j++)
        {
            printf("*\t");
        }

        printf("\n\n");
    }


    printf("Diamond Shape\n");

    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<=3-i; j++)
        {
            printf(" \t");
        }
        for(j=0; j<=i; j++)
        {
            printf("*\t");
        }
        for(j=1; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
    for(i=1; i<5; i++)
    {
        for(j=0; j<=i-1; j++)
        {
            printf(" \t");
        }
        for(j=0; j<=4-i; j++)
        {
            printf("*\t");
        }
        for(j=1; j<=4-i; j++)
        {
            printf("*\t");
        }

        printf("\n\n");
    }
    getch();
}
