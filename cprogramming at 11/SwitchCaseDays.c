#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter the day in number(1-7): ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("Sunday");

        case 2:
            printf("Monday");

        case 3:
            printf("Tuesday");

        case 4:
            printf("Wednesday");

        case 5:
            printf("Thursday");

        case 6:
            printf("Friday");

        case 7:
            printf("Saturday");

        default:
            printf("Invalid Input...");
    }
    getch();
}