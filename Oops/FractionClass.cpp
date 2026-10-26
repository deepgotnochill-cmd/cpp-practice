#include <iostream>
#include <cstdlib>   // for abs()
using namespace std;

class Fraction {
private:
    int num;
    int den;

    // Euclidean GCD (private helper)
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    // Simplifies the fraction in-place
    void simplify() {
        if (den == 0) {
            cout << "Error: denominator cannot be zero!\n";
            den = 1;          // prevent further division by zero
            return;
        }
        // Keep denominator positive
        if (den < 0) {
            num = -num;
            den = -den;
        }
        int g = gcd(abs(num), den);
        num /= g;
        den /= g;
    }

public:
    // Constructor with default parameters
    // Fraction()      → 0/1
    // Fraction(5)     → 5/1
    // Fraction(2, 4)  → 1/2 (auto-simplified)
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        simplify();
    }

    // Addition
    Fraction add(const Fraction& f) const {
        return Fraction(num * f.den + den * f.num,
                        den * f.den);
    }

    // Multiplication
    Fraction multiply(const Fraction& f) const {
        return Fraction(num * f.num, den * f.den);
    }

    // Print
    void print() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1;            // 0/1
    Fraction f2(5);         // 5/1
    Fraction f3(2, 4);      // 1/2
    Fraction f4(3, 6);      // 1/2

    cout << "f1 = "; f1.print();
    cout << "f2 = "; f2.print();
    cout << "f3 = "; f3.print();
    cout << "f4 = "; f4.print();

    cout << "\nf3 + f4 = ";
    f3.add(f4).print();

    cout << "f3 * f4 = ";
    f3.multiply(f4).print();

    return 0;
}