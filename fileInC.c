#include<stdio.h>
#include<conio.h>
void main(){
    char str1[100], str2[100], fname[50], lname[50];
    int age, i;
    FILE *fp;
    strcpy(str1, "This File is created by a program in c using fscanf and fprintf.");
    strcpy(fname, "Sangita");
    strcpy(lname, "Adhikari");
    age = 34;
    fp = fopen("classAt10.txt", "w");
   // fprintf(fp, "%s", str1);
   fprintf(fp, "%s %s %d", fname, lname, age);
    fclose(fp);

    fp = fopen("classAt10.txt", "r");
   // fscanf(fp, "%[^\n]s", &str2);
   fscanf(fp, "%s %s %d",&str1, &str2, &i );
    fclose(fp);

   // printf("text in the file: %s", str2);
   printf("%s %s %d", str1, str2, i);
    getch();
}
/*
 char str1[100];
    int i;
    FILE *fp;
    strcpy(str1, "This File is created by a program in c.");
    fp = fopen("classAt10.txt", "w");
    i=0;
    while(str1[i]!='\0'){
        fputc(str1[i],fp);
        i++;
    }
    fclose(fp);

    fp = fopen("classAt10.txt", "r");
    i=0;
    do{
        str1[i]=fgetc(fp);
        i++;
    }while(str1[i]!='\0');
    fclose(fp);

    printf("text in the file: %s", str1);


*/

/*
char str1[100], str2[100];
    FILE *fp;
    strcpy(str1, "This File is created by a program in c using fputs and fgets.");
    fp = fopen("classAt10.txt", "w");
    fputs(str1, fp);
    fclose(fp);

    fp = fopen("classAt10.txt", "r");
    fgets(&str2, 1, fp);
    fclose(fp);

    printf("text in the file: %s", str1);
    getch();

*/

/*
char str1[100], str2[100];
    FILE *fp;
    strcpy(str1, "This File is created by a program in c using fread and fwrite.");
    fp = fopen("classAt10.txt", "w");
    fwrite(str1, sizeof(str1), 1, fp);
    fclose(fp);

    fp = fopen("classAt10.txt", "r");
    fread(&str2, sizeof(str2), 1, fp);
    fclose(fp);

    printf("text in the file: %s", str2);
    getch();
*/
