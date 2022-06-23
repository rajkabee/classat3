#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    char ch;
    for(i=0; i<26; i++){
        printf("%c\t",i+65 );
    }

    printf("\n Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c : %d", ch, ch);
    getch();
}
