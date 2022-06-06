#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char text[200], str[200];
    int i;
    char ch;
    fp = fopen("MyFile.txt", "w");
    strcpy(str, "this time we are using fputc function.");
    //fprintf(fp, "this is a new file.");
    //fputs("Hello C Programming!",fp);
    //fwrite(str, 1, sizeof(str), fp); //for collection data types

    i=0;
    while(str[i]!='\0'){
        fputc(str[i], fp);
        i++;
    }
    fputc(EOF, fp);

    fclose(fp);

    fp = fopen("MyFile.txt", "r");
    //fscanf(fp, "%[^\n]s", &text);
    //fgets(text, 200, fp);
    //fread(text, sizeof(text), 1, fp);  //while working with collection data
    //i=0;
    ch=fgetc(fp);
    i=0;
    while(ch!=EOF){
        printf("%c",ch);
        text[i]=ch;
        ch = fgetc(fp);
        i++;

    }

    printf("\n%s", text);
    fclose(fp);

    getch();
}
