#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,z;
    float percent;
    char ch='t';
    x=9%2;
    printf("%d", x);

    x=5+234;
    x=x*567;
    printf("Enter three number: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("the numbers you entered are:\n %d\t%d\t%d", x, y, z);

    //percent = 1.236f;
    printf("\nEnter the percentage: ");
    scanf("%f", &percent);
    printf("\nPercentage : %0.2f", percent);


    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("\n character value ch : %c", ch);

    getch();
}
