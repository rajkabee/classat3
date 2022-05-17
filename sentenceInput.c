#include<stdio.h>
#include<conio.h>
void main(){
    char sentence[50];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", &sentence);
    printf("%s", sentence);

    getch();
}
