#include<stdio.h>
typedef struct student{
    int id;
    char name[50];
    float grade;
} Student;

void main(){
    Student *ptr;
    int i, n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    //ptr = malloc(n*sizeof(Student));
    ptr = calloc(n,sizeof(Student));
    for(i=0; i<n; i++){
        printf("Enter the id: ");
        scanf("%d", &(ptr+i)->id);
        printf("Enter the name: ");
        scanf(" %s", &(ptr+i)->name);
        printf("Enter the grade: ");
        scanf("%f", &(ptr+i)->grade);
    }
    for(i=0; i<n; i++){
         printf("%d. %s\t%.1f\n", (ptr+i)->id, (ptr+i)->name, (ptr+i)->grade);
    }
    //st.id=5;
    //strcpy(st.name, "Aryan");
    //st.grade=6.77;


}
