#include<stdio.h>
#include<conio.h>
void main(){
    int num, rev, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);//12345
    temp = num;
    rev=0;
    while(temp!=0){
        rem = temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    //printf("reverse: %d", rev);
    if(rev==num){
        printf("Palindrome!");
    }else{
        printf("Not a palindrome!");
    }



    getch();
}
