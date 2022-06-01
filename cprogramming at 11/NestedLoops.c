#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(j=0; j<10; j++)
    {
        for(i=0; i<10; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n");

    for(j=0; j<10; j++)
    {
        for(i=j; i<10; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n");

    for(j=0; j<10; j++)
    {
        for(i=0; i<=j; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(j=0; j<10; j++)
    {
        for(i=j+1; i<10; i++)
        {
            printf("   ");
        }
        for(i=0; i<=j; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(j=0; j<10; j++)
    {
        for(i=0; i<j; i++)
        {
            printf("   ");
        }
        for(i=j; i<10; i++)
        {
            printf("*  ");
        }

        printf("\n");
    }
    printf("\n\n\n");

    getch();
}
