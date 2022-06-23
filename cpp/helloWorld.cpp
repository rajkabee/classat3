#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"What is your name?\n :";
    cin>>name;
    cout<<"Hello "+name;

    cout<<"How old are you?";
    cin>>age;
    name=to_string(age);
    cout<<"so, you are "<<age<<"years old.";



    return 0;
}
