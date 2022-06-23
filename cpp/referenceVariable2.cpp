#include<iostream>
using namespace std;

int main(){
    string fruit = "Mango";
    string &food = fruit;
    cout<<fruit;
    cout<<food;
    food = "Pizza";
    cout<<"\n"<<food;
    cout<<"\n"<<fruit;
    return 0;
}
