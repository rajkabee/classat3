#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char fName[25];
    char lName[25];
    float percentage;
};
struct Student getStudent(){
    struct Student st;
    printf("Id: ");
    scanf("%d", &st.id);
    printf("First Name: ");
    scanf("%s", &st.fName);
    printf("Last Name: ");
    scanf("%s", &st.lName);
    printf("Percentage: ");
    scanf("%f", &st.percentage);
    return st;
}
void showStudent(struct Student x){
    printf("%d. %s %s \t %f\n", x.id, x.fName, x.lName, x.percentage);
}


void main(){
    struct Student st[3];
    int i;
    for(i=0; i<3; i++){
        st[i] = getStudent();
    }
    for(i=0; i<3; i++){
        showStudent(st[i]);
    }
    getch();
}

