#include<iostream>
using namespace std;
int main(){
    int x[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int y[4][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {4,3,2,5,6},{7,2,4,3,6}};
    int p[3][5];
    int i,j,k;
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            p[i][j]=0;
            for(k=0; k<4; k++){
                p[i][j] += x[i][k]*y[k][j];
            }
            cout<<p[i][j]<<"\t";
        }
        cout<<"\n";
    }



    return 0;
}
