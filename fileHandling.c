#include<stdio.h>
void main(){

    FILE *fp;
    char text[200], name[200];
    strcpy(name, "Mount Everest");
    fp = fopen("text.txt", "w+");
    fprintf(fp, "name: %s", name);
    fclose(fp);

    fp = fopen("text.txt", "r+");
    fscanf(fp, "%[^\n]s", &text);
    fclose(fp);
    printf("%s", text);
}
