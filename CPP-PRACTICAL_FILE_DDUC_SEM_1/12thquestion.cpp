#include <iostream>
using namespace std;
int main(){
    int n , tens , units , sum;
    cout<< "Enter a two - digit number: ";
    cin >> n;
    tens = n / 10;
    units = n % 10;
    sum = tens + units;
    cout << "Tens digit = "<<tens<<endl;
    cout <<"Unit digits = "<<units<<endl;
    cout<<"Sum = "<<sum;
    return 0;
}