#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter length: ";
    cin >> length;
    cout<<"Enter breadth: ";
    cin >> breadth;
    cout<<"Area = "<< length * breadth << endl;
    cout<<"Perimeter = "<< 2 * (length + breadth) << endl;
    cout<<"Diagonal = "<<sqrt(length * length + breadth * breadth);
    return 0; 
}