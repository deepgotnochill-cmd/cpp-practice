#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,m4,m5;
    float total , average , percentage;
    cout<<"Enter marks of five subjects : ";
    cin>>m1>>m2>>m3>>m4>>m5;
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = total / 5;
    cout<<"Total Marks = "<< total << endl;
    cout<<"Average = "<< average << endl;
    cout<<"Percentage ="<< percentage << "%";
    return 0;
}