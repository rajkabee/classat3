
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Student{
    int id;
    char name[50];
    float percentage;
};
void getDetails(struct Student *ptr){
    printf("Enter the student's destails: \n Id: ");
    scanf("%d", &(ptr->id));
    printf("Name: ");
    scanf(" %[^\n]s", &(ptr->name));
    printf("Percentage: ");
    scanf("%f", &(ptr->percentage));
}
void showDetails(struct Student *ptr){
    printf("%d. %s \t %f.\n", ptr->id, ptr->name, ptr->percentage);
}
void main(){
    struct Student *ptr;
    int i,n;
    printf("Enter the number of the Students: ");
    scanf("%d", &n);
    ptr =(struct Student *) malloc(n*sizeof(struct Student));
    for(i=0; i<n; i++){
        getDetails(ptr+i);
    }
    for(i=0; i<n; i++){
        showDetails(ptr+i);
    }
    getch();
}
