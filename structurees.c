#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char name[50];
};
struct Student getStudent();
void displayStudent(struct Student s);
void main(){
    struct Student st;
    st = getStudent();
    displayStudent(st);
}


struct Student getStudent(){
    struct Student s;
    printf("Enter the id: ");
    scanf("%d", &s.id);
    printf("Enter the name: ");
    scanf(" %[^\n]s", &s.name);
    return s;
};

void displayStudent(struct Student s){
    printf("%d. %s\n", s.id, s.name);
}
