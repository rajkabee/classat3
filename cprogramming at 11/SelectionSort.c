#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5] = {5,4,3,2,1}, i, j, t, k;
    for(i=0; i<=3; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[i]>num[j])
            {
                //swap
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
            for(k=0; k<5; k++)
            {
                printf("%d\t", num[k]);
            }
            printf("\n");
        }
    }
    printf("Output: ");
    for(k=0; k<5; k++)
    {
        printf("%d\t", num[k]);
    }



    getch();
}
