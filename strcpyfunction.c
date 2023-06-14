#include<stdio.h>
void main(){
    //char fname[50], lname[50], fullName[100];
    //printf("Enter your first name: ");
    //scanf("%s", &fname);
    //printf("Enter your last name: ");
    //scanf("%s", &lname);
    int i,j;
    char str1[50], str2[50];
    printf("Enter a word: ");
    scanf("%s", &str1);
    //strcpy(str2, str1);
    stringcopy(str2, str1);

    printf("%s", str2);
}
void stringcopy(char str2[50], char str1[50]){

    int i=0;
    while(str1[i]!='\0'){
       str2[i]=str1[i];
       i++;
    }
    str2[i]='\0';
}
