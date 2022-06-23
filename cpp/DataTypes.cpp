
#include<iostream>
#include<string>
using namespace std;
int main(){
    bool condition =true;
    if(condition){
        cout<<"true";
    }

    string name = "Sailesh";
    cout<<name[0];
    cout<<"\nEnter your name: ";
    //cin>>name;
    getline(cin, name);
    cout<<"Hello, "+name;
    return 0;
}
