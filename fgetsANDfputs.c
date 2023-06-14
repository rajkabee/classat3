#include<stdio.h>
void main(){
    FILE *fp;
    char text[200];
    fp = fopen("aryan.txt", "w+");
    fputs("This is fputs working!", fp);
    //fseek(fp, 5,SEEK_SET);
    fseek(fp, -15,SEEK_CUR);
    fgets(text, 200, fp);
    fclose(fp);
    printf("%s", text);
}
