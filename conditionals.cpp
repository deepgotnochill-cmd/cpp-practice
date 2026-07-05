#include <iostream>
using namespace std;
int main (){
    // int a = 5 , b = 10;
    // if ( a == b){
    //     cout << "equal matches "<< a << endl ;
    // } else {
    //     cout << "not equal \n " <<  a << endl;
    // }
    //  int a = 5 , b = 10;
    //  if ( a = b){
    //      cout << "equal matches "<< a << endl ;
    //  } else {
    //     cout << "not equal \n " <<  a << endl;
    // }
    // int num = -7;
    // if (num >= 0){
    //     cout << "inside positive block \n ";
    // } else {
    //     cout << "inside negative block \n " << endl;
    // }
    // return 0;
    //short circuit #1
    int x = 0 , y = 5 ;
    if ((x != 0) && (y = y+ 10) > 10 ) {
        cout << " inside if branch " << endl;
    }
    cout << "x =  " << x << " , y = " << y << endl;
    return 0;

}