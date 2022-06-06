#include<stdio.h>
#include<conio.h>
void main(){
    char name[50], count;
    printf("What is your name?\n- ");

    /*
    name[0] = 'A';
    name[1] = 'c';
    name[2] = 'e';
    printf("%s", name);
    */
    scanf("%s", &name);
    count=0;
    while(name[count]!='\0'){
        count++;
    }
    printf("No. of characters in your name : %d", count);
    count = strlen(name);
    printf("\n%d", count);
    getch();
}
