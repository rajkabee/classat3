#include<stdio.h>
#include<conio.h>
void main(){
    char name[50];
    int i;
    FILE *fp;
    /*
    printf("Enter your name: ");
    scanf(" %[^\n]s", &name);
    fp = fopen("Names.txt", "w");
    i=0;
    while(name[i]!='\0'){
        fputc(name[i], fp);
        i++;
    }
    fclose(fp);
    */
    fp = fopen("Names.txt", "r");
    i=0;
    do{
        name[i] = fgetc(fp);
        i++;
    }while(!feof(fp));
    printf("%s", name);
    fclose(fp);
    getch();
}
