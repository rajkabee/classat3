#include<stdio.h>
#include<conio.h>
void main(){
    int ch;
    printf("Make a choice: \n");
    printf(" 1. Swimming\n 2. Hiking \n 3. Cycling\n");
    scanf("%d", &ch);
    switch (ch){
    case 1:
        printf("Let's go for a swim.");
        break;
    case 2:
        printf("Lets go to Shivapuri!");
        break;
    case 3:
        printf("lets go to godawari on cycle!");
        break;
    default:
        printf("Lets stay home!");
    }
    getch();
}
