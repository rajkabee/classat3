#include<stdio.h>
#include<conio.h>
void main(){
    char str1[50], str2[50], sum[100];
    int l1, l2, l;
    printf("Enter two strings: ");
    scanf(" %s %s", &str1, &str2);
    printf("\nstr1: %s", str1);
    printf("\nstr2: %s", str2);
    l=0;
    while(str1[l]!='\0'){
        sum[l]=str1[l];
        l++;
    }
    l2=0;
    while(str2[l2]!='\0'){
        sum[l]=str2[l2];
        l++;
        l2++;
    }
    sum[l]='\0';
    printf("\nsum: %s", sum);
    strcat(str1, str2);
    printf("\nstr1: %s", str1);
    getch();
}
