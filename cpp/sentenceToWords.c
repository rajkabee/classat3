#include<stdio.h>
#include<conio.h>
void main(){
    char sentence[100];
    char word[10][15];
    int i,j,k;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", &sentence);
    j=0;
    k=0;
    for(i=0; sentence[i]!='\0'; i++){
        if(sentence[i]!=' '){
            word[j][k]=sentence[i];
            k++;
        }
        else{
            word[j][k]='\0';
            j++;
            k=0;
        }
    }
    word[j][k]='\0';
    for(i=0; i<=j; i++){
        printf("%s\n", word[i]);
    }

    getch();
}
