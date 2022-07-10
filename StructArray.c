#include<stdio.h>
#include<conio.h>
struct Student{
    int id;
    char name[50];
    float percentage;
};
struct Student getDetails(){
    struct Student st;
    printf("Enter the student's destails: \n Id: ");
    scanf("%d", &st.id);
    printf("Name: ");
    scanf(" %[^\n]s", &st.name);
    printf("Percentage: ");
    scanf("%f", &st.percentage);
    return st;
}
void showDetails(struct Student st){
    printf("%d. %s \t %f.\n", st.id, st.name, st.percentage);
}
void main(){
    struct Student st[3];
    int i;
    for(i=0; i<3; i++){
        st[i] = getDetails();
    }
    for(i=0; i<3; i++){
        showDetails(st[i]);
    }
    getch();
}
