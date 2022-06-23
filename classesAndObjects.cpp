#include<iostream>
using namespace std;
class Student{
    public :
    int id;
    string name;
    float percentage;
    //argumented constructor
    Student(int id, string name, float percentage){
        this->id = id;
        this->name = name;
        this->percentage = percentage;
    }
    //default constructor
    Student(){
    }


    void display(){
        cout<<id<<". "<<name<<"\t"<<percentage;
    }
    void setName(string name);
};

void Student::setName(string name){
    Student::name=name;
}



int main(){
    Student st;
    st.id = 1;
    st.name = "Ram Prasad";
    st.percentage = 78.34;
    st.setName("Yamuna");
    st.display();
    cout<<"\n";
    Student st1(3, "Smriti Lamichhane", 92.95f);
    st1.display();
    return 0;
}

