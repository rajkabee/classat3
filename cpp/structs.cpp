#include<iostream>
using namespace std;
struct Student{
    int id;
    string name;
    float percentage;
} ;



int main(){
    int x;
    Student student;
    student.id = 1;
    student.name = "Ram Prasad";
    student.percentage = 78.34;
    cout<<student.id<<". "<<student.name<<"\t"<<student.percentage;


    return 0;
}
