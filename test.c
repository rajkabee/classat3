#include<stdio.h>
struct student{
    char name[50];
    int age;
};

void main(){

    struct student st1, st2;
    strcpy(st1.name, "Sudhir Lohani");
    st1.age=23;

    strcpy(st2.name, "Regal Maharjan");
    st2.age=23;


}
