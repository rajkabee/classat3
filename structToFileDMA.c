
#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char fName[50];
    char lName[50];
    char email[100];
};
void main(){
    struct student st;
    int i, n;
    FILE *fp;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    printf("Enter the details of: ");
    fp = fopen("students.txt", "a");
    for(i=0; i<n; i++){
        printf("%dth student: \n Id: ", i+1);
        scanf("%d", &st.id);
        printf("First Name: ");
        scanf(" %s", &st.fName);
        printf("Last Name: ");
        scanf(" %s", &st.lName);
        printf("Email: ");
        scanf(" %s", &st.email);
        fwrite(&st,sizeof(struct student), 1, fp);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    fread(&st,sizeof(struct student), 1, fp);

    while(!feof(fp)){
        printf("%d.  %d\t",i+1,st.id);
        printf(" %s ",st.fName);
        printf("%s\t",st.lName);
        printf("%s\n",st.email);
        fread(&st,sizeof(struct student), 1, fp);
    }
    fclose(fp);

    getch();
}
