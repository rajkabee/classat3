
#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[50];
    float percent;
} st;
void main(){
    //struct myData st;
    st.percent = 79.765f;
    st.id = 123;
    strcpy(st.name, "saugat");

    printf("Id = %d\n", st.id);
    printf("name = %s\n", st.name);
    printf("percent  = %.3f", st.percent);

}
