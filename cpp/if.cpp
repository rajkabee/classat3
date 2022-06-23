

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your choice: \n a. Americano \n b. Mochaccino \n c. Cappuccino\n   :-";
    cin>>ch;
    if(ch=='a'){
        cout<<"Americano is served";
    }
    else if(ch=='b'){
        cout<<"Mochaccino is served";
    }
    else if(ch=='c'){
        cout << "Capopuccino is served";
    }
    else{
        cout<<"invalid choice";
    }
    return 0;
}

