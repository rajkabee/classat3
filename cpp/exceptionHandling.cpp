#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int i;
    try{
        cout<<"Enter your age: ";
        cin>>i;
        if(i<35){
            cout<<"you are hired";
        }
        else{
            throw(234);
        }
    }
    catch(int e){
        if(e==234){
            cout<<"Enter your height:";
            int height;
            cin>>height;
            if(height>6){
                cout<<"you can be hired!";
            }else{
                cout<<"sorry";
            }
        }
    }
    return 0;
}

