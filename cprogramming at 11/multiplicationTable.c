#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, p;
    printf("Enter a number: ");
    scanf("%d", &num);

    i=1;
    while(i<11){
        p = num*i;
        printf("%d X %d = %d \n",num, i, p);
        i++;
    }

    getch();
}
