#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char ch;
    fp = fopen("test.txt","w");
    fputc('r', fp);
    fclose(fp);

    fp = fopen("test.txt","r");
    ch = fgetc( fp);
    fclose(fp);
    printf("%c", ch);
    getch();
}
