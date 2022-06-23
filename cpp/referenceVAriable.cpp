#include<iostream>
using namespace std;
int main(){
    string food = "Pizza";
    string &meal = food;
    meal = "Burger";
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    return 0;
}
