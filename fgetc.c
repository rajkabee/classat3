#include<stdio.h>
void main(){
    FILE *fp;
    char text[200], name[200];
    int i;
    strcpy(name, "Kabiraj Shrestha");
    fp = fopen("aryan.bin", "w+");
    i=0;
    while(name[i]!='\0'){
        fputc(name[i], fp);
        i++;
    }
    fseek(fp, 0,SEEK_SET);
    do{
        printf("%c",fgetc(fp));
    }while(!feof(fp));
    fclose(fp);
    printf("%s", text);
}

