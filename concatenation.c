#include<stdio.h>
#include<conio.h>
void main(){
    char fname[50], lname[50], fullname[100];
    printf("Enter your first name: ");
    scanf(" %s", &fname);
    printf("Enter your last name: ");
    scanf(" %s", &lname);
    concat(fname, lname, fullname);
    printf("Fullname: %s",  fullname);
    getch();
}
void concat(char str1[50], char str2[50], char str3[50]){
    int i, j;
    i=0;
    while(str1[i]!='\0'){
        str3[i]=str1[i];
        i++;
    }
    str3[i]=' ';
    i++;
    j=0;
    while(str2[j]!='\0'){
        str3[i]=str2[j];
        i++;
        j++;
    }
    str3[i]='\0';
}
