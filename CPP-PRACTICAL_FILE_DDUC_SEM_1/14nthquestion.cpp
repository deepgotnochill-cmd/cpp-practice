#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter a and b: ";
    cin >> a >> b;
    cout<<"1. a is greater than b"<<(a > b)<<endl;
    cout<<"2. a is less than b"<<(a < b)<<endl;
    cout<<"3. a is equal to b: " << ( a == b) << endl;
    cout<<"4. a is not equal to 0: " << (a != 0) << endl;
    cout<<"5. Both a and b are positive: "<<(a > 0 && b > 0)<<endl;
    cout<<"6. At least one is positive: " << (a > 0 || b > 0)<<endl;
    cout<<"7. a is an odd number : " << (a % 2 != 0) << endl;
    cout<<"8. At least one of a  and b is even : " << ( a % 2 == 0 || b % 2 == 0);
    return 0;
}