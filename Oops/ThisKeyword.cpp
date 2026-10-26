#include <iostream>
#include <string>
using namespace std;

class Pokemon {
public:
    string name;
    string type;
    int hp;

    // Constructor
    Pokemon(string n, string t, int h) {
        this->name = name;
        this->type = type;
        this->hp = hp;
    }

    // Print function
    void print() {
        cout << name << " " << type << " " << hp << endl;
    }
};

int main() {
    Pokemon p1("Pikachu", "Electric", 70);
    Pokemon p2("Charizard", "Fire", 120);
    Pokemon p3("Mewtwo", "Psychic", 200);

    // Print the details
    p1.print();
    p2.print();
    p3.print();

    return 0;
}