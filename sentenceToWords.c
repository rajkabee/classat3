#include<stdio.h>
#include<conio.h>
void main(){
    char str[200];
    char word[10][20];
    int i,j,k;
    strcpy(str, "hello my name is kabiraj shrestha");
    i=0;
    j=0;
    k=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            word[j][k]=str[i];
            k++;
            i++;
        }
        else{
            word[j][k]='\0';
            j++;
            k=0;
            i++;
        }
    }
    word[j][k]='\0';

    for(i=0; i<=j; i++){
        printf("%s\n", word[i]);
    }


    getch();
}
