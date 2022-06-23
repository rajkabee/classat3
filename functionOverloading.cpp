#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
int main(){
    cout<<add(5,7)<<"\n";
    cout<<add(1,2,3);
    return 0;
}
