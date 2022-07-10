#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    fp = fopen("myFile.txt", "w");
    fputs("I am A Programmer.", fp);
    fclose(fp);
}
