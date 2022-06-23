#include<iostream>
using namespace std;
int main(){
    string x[3][4] = {{"apples", "Bananas", "Mangoes", "Papayas"}
                    ,{"sony", "Samsung", "apple", "MI"}
                    ,{"BMW", "Rolls Royce", "Ferrari", "Toyota"}};
    int num[]={1,2,3,4,5};
    cout<<sizeof(num);
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            cout<<x[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
