#include<stdio.h>
#include<conio.h>
void main(){
    char str1[50], str2[50];
    int i;
    printf("Enter a word: ");
    scanf("%s", &str1);
    //strcpy(str2, str1);
    i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;

    }
    //str2[i]='\0';

    printf("string2: %s", str2);



    getch();
}
