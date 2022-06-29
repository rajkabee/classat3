#include<stdio.h>
#include<conio.h>
void main(){
     /*

    //writing in the file using fputc
    FILE *fp;
    char name[50], ch;
    int i;
    strcpy(name, "Abraham Lincoln");
    fp = fopen("DursikshyaClassAt4.txt", "w");
    for(i=0; i<strlen(name); i++){
        fputc(name[i], fp);
    }
    fclose(fp);


    //reading from a file using fgetc
    FILE *fp;
    char name[50], ch;
    int i;
    fp = fopen("DursikshyaClassAt4.txt", "r");
    i=0;
   do{
        ch= fgetc(fp);
        name[i] = ch;
        i++;
   }while(ch!=EOF);
    name[i] = '\0';
   printf("%s", name);
    fclose(fp);

    //writing in the file using fputs
    FILE *fp;
    char name[50];
    strcpy(name, "Subhekshya Khadka");
    fp = fopen("DursikshyaClassAt4.txt", "w");
    fputs(name, fp);
    fclose(fp);

    FILE *fp;
    char name[50];

    fp = fopen("DursikshyaClassAt4.txt", "r");
    fgets(&name,50, fp);
    printf("%s", name);
    fclose(fp);


    //writing using fwrite
    FILE *fp;
    char name[50];
    strcpy(name, "Smriti Lamichhane");
    fp = fopen("DursikshyaClassAt4.txt", "w");
    fwrite(name, sizeof(name), 1, fp);
    fclose(fp);

    //reading from a file using fread
    FILE *fp;
    char name[50];
    fp = fopen("DursikshyaClassAt4.txt", "r");
    fread(&name, sizeof(name), 1, fp);
    printf("%s", name);
    fclose(fp);

    //writing using fprintf
    FILE *fp;
    char name[50];
    int age = 29;
    strcpy(name, "Manisha Gurung");
    fp = fopen("DursikshyaClassAt4.txt", "w");
    fprintf(fp, "%s %d", name, age);
    fclose(fp);
    */
    //reading using fscanf
    FILE *fp;
    char fname[50], lname[50];
    int age;
    fp = fopen("DursikshyaClassAt4.txt", "r");
    fscanf(fp, "%s %s %d", &fname, &lname, &age);
    printf("%s %s %d", fname, lname, age);
    fclose(fp);

}
