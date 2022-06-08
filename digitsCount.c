#include<stdio.h>
#include<stdio.h>
void main(){
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=0;
    while(num!=0){
        num=num/10;
        count=count+1;;
    }
    printf("number of digits: %d", count);
    getch();
}
