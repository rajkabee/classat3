#include<stdio.h>
#include<conio.h>
void main(){
    /*
    fibonacci series
    0,1,1,2,3,5,8,13,21,.....
    */
    int n1 =0, n2=1, n3, count,i;
    printf("Enter the no. of fibonacci series values:  ");
    scanf("%d", &count);
    i=0;
    while(i<count){
        printf("%d\n", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        i++;
    }


    getch();
}
