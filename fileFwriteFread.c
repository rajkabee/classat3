
#include<stdio.h>
#include<conio.h>
void main(){
    char name[50], str[50];
    int i;
    FILE *fp;

    printf("Enter your name: ");
    scanf(" %[^\n]s", &name);
    fp = fopen("Names.txt", "w");
    fwrite(&name, sizeof(name), 1, fp);
    fclose(fp);

    fp = fopen("Names.txt", "r");
    fread(&str, sizeof(char), 50, fp);
    printf("%s", str);
    fclose(fp);
    getch();
}

