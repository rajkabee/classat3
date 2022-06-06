#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("the input is: ");
    putch(ch);

    /*
    int i;
    printf("Enter 5 characters: ");
    scanf("%s", &ch);
    printf("the word you entered : %s", ch);

    /*
    for(i=0; i<5; i++){
        scanf(" %c", &ch[i]);
    }

    for(i=0; i<5; i++){
        printf("%c", ch[i]);
    }
    */
    return 0;
}
