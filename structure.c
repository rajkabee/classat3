#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char name[50];
    char address[50];
};
void main(){
    struct Student st[3];
    int i;
    printf("Enter the details of three students: \n");
    for(i=0; i<3; i++){
        printf("Id: ");
        scanf("%d", &st[i].id);
        printf("Name: ");
        scanf(" %s", &st[i].name);
        printf("Address: ");
        scanf(" %s", st[i].address);
    }

    printf("The students details you entered are: \n");
    for(i=0; i<3; i++){
        printf("%d. %s\t%s\n", st[i].id, st[i].name, st[i].address);
    }

    getch();
}
