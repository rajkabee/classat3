#include<iostream>
using namespace std;
int getInt();
int arms(int n);
int pow(int b, int p);
int main(){
    int num;
    int temp;
    cout<<"Enter a number:";
    num=getInt();
    cout<<"The number is: "<<num;
    temp = arms(num);
    if(temp==1){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"not a Armstrong number";
    }
    return 0;
}

int getInt(){
    int i;
    cin>>i;
    return i;
}


int arms(int n){
    int t=n;
    int dig, rem, arm;
    arm=0;
    dig=0;
    while(t>0){
        t/=10;
        dig++;
    }
    t=n;
    while(t!=0){
        rem = t%10;
        arm+=pow(rem,dig);
        t/=10;
    }
    if(arm==n){
        return 1;
    }
    else{
    return 0;
    }
}

int pow(int b, int p){
    int res;
    res=1;
    while(p!=0){
        res*=b;
        p--;
    }
    return res;
}


float pi(){
    return 3.1415f;
}
