
#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char str2[100], str1[100];
    char name[50];
    int age = 29, i;
    strcpy(name, "Saugat Malla");

    fp = fopen("test.txt","w");

    fprintf(fp, "%s %d", name, age);
    fclose(fp);

    fp = fopen("test.txt","r");
    //fscanf(fp, "%[^\n]s %d", &str1);
    fscanf(fp, "%s %s %d", &str1,&str2, &i);
    fclose(fp);
    printf("%s %s %d", str1,str2,i);
    getch();
}
