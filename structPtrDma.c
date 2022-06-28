#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char name[50];
    char address[50];
    float percentage;
};
void getStudents(struct Student *, int);
void displayStudents(struct Student *ptr, int n);


void main(){
    struct Student *stptr;
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    //malloc allocates memory where as calloc clears and allocates memory
    stptr = calloc(n, sizeof(struct Student));//malloc(n*sizeof(struct Student));
    //getStudents(stptr, n);
    displayStudents(stptr, n);
    getch();
}
void getStudents(struct Student *ptr, int n){
    int i;
    for(i=0; i<n; i++){
        printf("Enter the student's details: \nId: ");
        scanf("%d", &(ptr+i)->id);
        printf("Name: ");
        scanf(" %[^\n]s", &(ptr+i)->name);
        printf("Address: ");
        scanf(" %[^\n]s", &(ptr+i)->address);
        printf("Prercentage: ");
        scanf("%f", &(ptr+i)->percentage);
    }
}
void displayStudents(struct Student *ptr, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d. %s \t %s \t %f. \n", (ptr+i)->id, (ptr+i)->name, (ptr+i)->address, (ptr+i)->percentage);
    }
}
