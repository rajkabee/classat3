
#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}
int main(){
    int x,y, result, ch;

    cout<<"Enter two numbers";
    cin>>x>>y;
    cout<<"1. add \n2. subtract \n3. multiply \n4.division";
    cin>>ch;
    switch(ch){
    case 1:
        result = add(x,y);
        break;
    case 2:
        result = subtract(x,y);
        break;
    case 3:
        result = multiply(x,y);
        break;
    case 4:
        result = divide(x,y);
        break;
    default:
        result=0;
    }
    cout<<"Result: "<<result;





    return 0;
}

