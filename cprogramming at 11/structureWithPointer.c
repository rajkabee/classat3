
#include<stdio.h>
#include<conio.h>
//void getStudentDetails(struct student *ptr);
struct student{
    int id;
    char name[100];
    float percent;
}st[3];
void main(){
    //struct student st;
    int i;
    for(i=0; i<3; i++){
        printf("Enter the %dth student's details: \nId: ", i+1);
        getStudentDetails(&st[i]);
    }
    showStudentDetails(&st);
    getch();
}
void getStudentDetails(struct student *ptr){
    scanf("%d", &(ptr->id));
    printf("Name: ");
    scanf(" %[^\n]s", &(ptr->name));
    printf("Percentage: ");
    scanf("%f", &(ptr->percent));
}
void showStudentDetails(struct student *ptr){
    int i;
    for(i=0; i<3; i++){
        printf("%dth Student's Details: \n", i+1);
        printf("%d. %s\t%.2f\n\n", (ptr+i)->id, (ptr+i)->name, (ptr+i)->percent);
    }
}
