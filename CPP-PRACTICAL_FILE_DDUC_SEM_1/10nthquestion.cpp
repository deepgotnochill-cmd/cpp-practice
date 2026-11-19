#include <iostream>
using namespace std;
int main(){
    float p1 , p2 , p3;
    int q1 , q2 , q3;
    float total;
    cout<<"Enter price and quantity of product 1: ";
    cin >> p1 >> q1;
    cout<<"Enter price and quantity of product 2: ";
    cin >> p2 >> q2;
    cout<<"Enter price and quantity of product 3: ";
    cin >> p3 >> q3;
    total = ( p1 * q1) + (p2 * q2) + (p3 * q3);
    cout<<"Total Bill = "<< total;
    return 0;
}