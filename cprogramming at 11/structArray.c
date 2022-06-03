#include<stdio.h>
#include<conio.h>
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
        scanf("%d", &st[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", &st[i].name);
        printf("Percentage: ");
        scanf("%f", &st[i].percent);
    }
    for(i=0; i<3; i++){
       // printf("%dth Student's Details: \n", i+1);
        printf("%d. %s\t%.2f", st[i].id, st[i].name, st[i].percent);
    }
    getch();
}
