
#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char name[50];
    float percentage;
};
void main(){
    struct Student st1, st2;
    int i;
    FILE *fp;
    st1.id = 321;
    strcpy(st1.name, "Rajeev Prajapati");
    st1.percentage = 78.79f;

    fp = fopen("Names.bin", "w");
    fwrite(&st1, sizeof(struct Student), 1, fp);
    fclose(fp);

    fp = fopen("Names.bin", "r");
    fread(&st2, sizeof(struct Student), 1, fp);
    printf("%d. %s \t %f",st2.id, st2.name, st2.percentage);
    fclose(fp);
    getch();
}

