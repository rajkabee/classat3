#include<iostream>
using namespace std;
int main(){
    short sh[] = {1,2,3,4,5};
    int i[] = {1,2,3,4,5};
    short* ptrsh;
    ptrsh=&sh[0];
    int* ptri;
    ptri = &i[0];
    int j;
    for(j=0; j<5; j++){
        //cout<<(ptri+j)<<"\t";
        printf("%d\t", (ptrsh+j));
    }
    cout<<"\n";
    for(j=0; j<5; j++){
        //cout<<(ptri+j)<<"\t";
        printf("%d\t", (ptri+j));
    }

    return 0;
}
