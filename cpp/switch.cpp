

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your choice: \n a. Americano \n b. Mochaccino \n c. Cappuccino\n   :-";
    cin>>ch;
    switch(ch){
    case 'a':
        cout<<"Americano is served";
        break;
    case 'b':
        cout<<"Mochaccion is served";
        break;
    case 'c':
        cout<<"Cappuccino is served";
        break;
    default:
        cout<<"Invalid Choice";
    }
    return 0;
}


