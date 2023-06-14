#include<stdio.h>
typedef struct student{
    int id;
    char name[50];
} Student;

void main(){
    Student st, rst;
    st.id=123;
    strcpy(st.name, "Subodh Acharya");
    FILE *fp;
    char text[200], name[200];
    strcpy(name, "Ayan Jindal");
    fp = fopen("ayan.bin", "w+");
    fwrite(&st, sizeof(Student), 1, fp);
    fseek(fp, 0,SEEK_SET);
    fread(&rst, sizeof(Student), 1, fp);
    fclose(fp);
    printf("%d. %s", rst.id, rst.name);
}

