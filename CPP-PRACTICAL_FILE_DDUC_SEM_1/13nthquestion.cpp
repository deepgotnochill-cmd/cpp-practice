#include<iostream>
using namespace std;
int main(){
    int total , hours , minutes , seconds;
    cout << "Enter total seconds: ";
    cin >> total;
    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
    cout << "Hours = "<< hours << endl;
    cout << "Minutes = "<< minutes << endl;
    cout<< "Seconds ="<< seconds;
    return 0;
}