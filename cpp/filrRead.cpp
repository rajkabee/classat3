#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string text;
    ifstream myFile("myFile.txt");
    while(getline(myFile, text)){
        cout<<text;
    }
    myFile.close();
    return 0;
}
