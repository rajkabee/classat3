#include<stdio.h>
#include<conio.h>
void main(){
    char name[50];
    int i;
    FILE *fp;

    printf("Enter your name: ");
    scanf(" %[^\n]s", &name);
    fp = fopen("Names.txt", "w");
    fprintf(fp,"%s", name);
    fclose(fp);

    fp = fopen("Names.txt", "r");
    fscanf(fp, " %[^\n]s", &name);
    printf("%s", name);
    fclose(fp);
    getch();
}

