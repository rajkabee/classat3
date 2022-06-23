

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int i;
    for(i=0; i<100; i++){
        if(i%3==0){
            continue;
        }
        if(i%7==0){
            cout<<i<<"\n";
        }

    }
    return 0;
}


