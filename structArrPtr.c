
#include<stdio.h>
#include<conio.h>
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
    struct Student st[3];
    int i;
    for(i=0; i<3; i++){
        getDetails(&st[i]);
    }
    for(i=0; i<3; i++){
        showDetails(&st[i]);
    }
    getch();
}
