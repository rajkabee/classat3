
#include<stdio.h>
#include<conio.h>
void main(){
    char name[50];
    int i;
    FILE *fp;

    printf("Enter your name: ");
    scanf(" %[^\n]s", &name);
    fp = fopen("Names.txt", "w");
    fputs(name, fp);
    fclose(fp);

    fp = fopen("Names.txt", "r");
    fgets(&name, 50, fp);
    printf("%s", name);
    fclose(fp);
    getch();
}
