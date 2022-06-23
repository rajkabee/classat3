#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    double f;
    char ch;
    ch = 'r';
    f = 1.123;
    num = 12345;
    /*
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Value of num: %d\n", num);

    printf("Value of f: %f\n", f);
    printf("Enter a floating point value:\n ");
    scanf("%lf", &f);
    printf("Value of f: %.2lf\n", f);
    */
    printf("The value of char ch: %c\n", ch);//printng
    //scanf("%c", &ch);

    ch = getch();
    printf("The value of char ch: %c\n", ch);

    getch();
}
