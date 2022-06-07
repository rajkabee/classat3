#include<stdio.h>
#include<conio.h>
void main(){
    char word[50], rev[50];
    int i,j, flag=0;
    printf("Enter a word: ");
    scanf("%s", &word);
    i=0;
    while(word[i]!='\0'){
        i++;
    }
    rev[i]=word[i];
    i--;
    j=0;
    while(i>=0){
        rev[j]=word[i];
        j++;
        i--;
    }
    printf("Rev: %s", rev);
    i=0;
    while(word[i]!='\0'){
        if(word[i]!=rev[i]){
            flag=1;
            break;
        }
        i++;

    }
    if(flag==1){
        printf("\nNot a palindrome");
    }
    else{
        printf("\nPalindrome");
    }

    getch();
}
