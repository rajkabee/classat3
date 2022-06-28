#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char str[50];
    fp = fopen("test.txt","w");
    fputs("hello", fp);
    fclose(fp);

    fp = fopen("test.txt","r");
    fgets(&str, 50, fp);
    fclose(fp);
    printf("%s", str);
    getch();
}
