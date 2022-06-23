#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myFile("myFile.txt");
    myFile<<"this is a file created in CPP.";
    myFile.close();
    return 0;
}
