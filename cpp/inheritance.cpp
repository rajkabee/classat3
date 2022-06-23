#include<iostream>
using namespace std;
class Person{
    protected:
    int nationalId;
    string name;
    string address;
    void display(){
        cout<<this->nationalId<<". "<<this->name<<"\t"<<this->address<<"\n";
    }
};
class Employee :public Person{
    public:
    int empId;
    string position;
    float salary;
    public:
    Employee(int nid, string name, string address, int eid, string position, float salary){
        this->nationalId = nid;
        this->name = name;
        this->address = address;
        this->empId = eid;
        this->position = position;
        this->salary = salary;
    }

    public:
        void display(){
            //Person::display();
            cout<<this->nationalId<<". "<<this->name<<"\t"<<this->address<<"\n";

            cout<<this->empId<<". "<<this->position<<"\t"<<this->salary;
        }
};

int main(){
    Employee emp(12321, "prahlad", "ktm", 12, "accountant", 36000);
    //emp.empId = 123;
    //emp.position = "Programmer";
    //emp.salary = 45000;
    //emp.nationalId = 12345;
    //emp.name = "Prahlad";
    //emp.address = "Chitwan";
    emp.display();
    return 0;
}
