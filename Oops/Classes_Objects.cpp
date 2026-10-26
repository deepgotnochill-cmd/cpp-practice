#include<iostream>
using namespace std;
class Student{
public:
string name;
int rno;
float cgpa;
Student(){

}
Student(string n , float c, int r){
 name = n;
 rno = r ;
 cgpa = c;
}    
};
int main(){
    Student x("Sumit", 8.7, 39);
    Student z("Tisha", 9.9,44);
    Student y;
    y.name = "Deep";
    y.rno = 17;
    y.cgpa = 8.71;
    cout<<y.name<<" "<<y.rno<<" "<<y.cgpa<<endl;
    cout<<z.name<<" "<<z.rno<<" "<<z.cgpa<<endl;
}