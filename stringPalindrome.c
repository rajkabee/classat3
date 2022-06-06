#include<stdio.h>
#include<conio.h>
void main(){
    char str[50], rev[50];
    int i, flag = 0;
    printf("Enter a string : ");
    scanf(" %s", &str);
    strcpy(rev, str);
    strrev(rev);
    printf("%s", rev);
    i=0;
    while(str[i]!='\0'){
        if(str[i]!=rev[i]){
            flag=1;
        }
        i++;
    }
    if(flag==0){
        printf("palindrome!");
    }
    else{
        printf("not a  palindrome!");
    }

    getch();
}
