#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char fName[50];
    char lName[50];
    char email[100];
};
void main(){
    struct student st[3];
    struct student students[3];
    int i;
    FILE *fp;
    printf("Enter the details of: ");
    for(i=0; i<3; i++){
        printf("%dth student: \n Id: ", i+1);
        scanf("%d", &st[i].id);
        printf("First Name: ");
        scanf(" %s", &st[i].fName);
        printf("Last Name: ");
        scanf(" %s", &st[i].lName);
        printf("Email: ");
        scanf(" %s", &st[i].email);
    }

    fp = fopen("students.txt", "w");
    //fwrite(st,sizeof(struct student), 3, fp);
    for(i=0; i<3; i++){
        fwrite(&students[i],sizeof(struct student), 1, fp);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    //fread(students,sizeof(struct student), 3, fp);
    for(i=0; i<3; i++){
        fread(&students[i],sizeof(struct student), 1, fp);
    }
    fclose(fp);




    printf("Details you entered are\n");
    for(i=0; i<3; i++){
        printf("%dth student: \n Id: %d\n",i+1,students[i].id);

        printf("First Name: %s\n",students[i].fName);
        printf("Last Name: %s\n",students[i].lName);

        printf("Email: %s\n",students[i].email);
    }

    getch();
}
