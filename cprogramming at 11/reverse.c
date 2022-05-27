#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i, rev=0, rem;
    while(num!=0){
        rem = num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse: %d", rev);

	getch();
}
