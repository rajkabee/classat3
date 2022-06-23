#include<iostream>
using namespace std;
class Item{
public:
    int x;
private:
    int y;

public:
    void sety(int y){
        this->y = y;
    }
    int gety(){
        return this->y;
    }
};


int main(){
    Item item;
    item.x=5;
    cout<<"X: "<<item.x;

    item.sety(234);
    cout<<"\nY: "<<item.gety();
    return 0;
}
