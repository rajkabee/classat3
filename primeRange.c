#include<stdio.h>
#include<conio.h>
void main()
{
    int range, num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &range);
    for(num=1; num<=range; num++)
    {
        if(num<2){
            printf("%d is neither prime nor composite.", num);
            continue;
        }
        flag = 0;
        for(i=2; i<=(num/2); i++)
        {
            if(num%i==0)
            {
                //composite
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n", num);
        }
    }

    getch();
}
