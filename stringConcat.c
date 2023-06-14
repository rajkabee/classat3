#include<stdio.h>
void main(){

    char s1[50], s2[50], s[100];//s1="hello", s2="world"
    int i, j;
    printf("Enter the first word: ");
    scanf(" %s", &s1);
    printf("Enter the second word: ");
    scanf(" %s", &s2);
    i=0;
    //printf("Result: %s", s1);
    while(s1[i]!='\0'){
        s[i]=s1[i];
        i++;
        //printf("Result: %s\n", s);
    }
    j=0;
    while(s2[j]!='\0'){
        s[i]=s2[j];
        j++;
        i++;
    }
    s[i]='\0';
    printf("Result: %s", s);


}
