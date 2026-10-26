#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;

    void print() const {
        cout << name << " " << power << " " << mileage << " "
             << boolalpha << isE20Compatible << endl;
    }
};

int main() {
    Car c1;
    c1.name = "Kia Sonet";
    c1.power = 118;
    c1.mileage = 9.2f;
    c1.isE20Compatible = true;

    Car c2 = {"Toyota Fortuner", 200, 7.6f, false};

    cout << c2.power << endl;
    c1.print();
    c2.print();
}