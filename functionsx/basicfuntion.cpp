#include <iostream>
using namespace std;
void tisha(){
   cout<<"Tisha is an obidient girl"<<endl;
}
void deep(){
   cout<<"Deep is an obidient boy"<<endl;
   tisha();
}
int main(){
    tisha();
    deep();
   cout<<"Hi Tisha"<<endl;
   deep();//fn calling
   tisha();
   deep();
   tisha();
}