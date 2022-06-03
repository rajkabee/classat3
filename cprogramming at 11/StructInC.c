#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[100];
    float percent;
};
void main(){
    struct student st;
    st.id = 7;
    strcpy(st.name, "Manisha");
    st.percent = 89.98f;
    printf("Student's Details: \n");
    printf("%d. %s\t%.2f", st.id, st.name, st.percent);
    getch();
}
