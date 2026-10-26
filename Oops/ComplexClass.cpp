#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {
        simplify();
    }

    // Simplify: clean up very small floating-point noise
    void simplify() {
        const double eps = 1e-12;
        if (fabs(real) < eps) real = 0.0;
        if (fabs(imag) < eps) imag = 0.0;
    }

    // Getters
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Addition
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Multiplication
    Complex multiply(const Complex& other) const {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        return Complex(r, i);
    }

    // Division
    Complex divide(const Complex& other) const {
        double denom = other.real * other.real + other.imag * other.imag;
        if (fabs(denom) < 1e-12) {
            cerr << "Error: Division by zero complex number!" << endl;
            return Complex(0, 0);
        }
        double r = (real * other.real + imag * other.imag) / denom;
        double i = (imag * other.real - real * other.imag) / denom;
        return Complex(r, i);
    }

    // Conjugate
    Complex conjugate() const {
        return Complex(real, -imag);
    }

    // Pretty print
    void print() const {
        if (imag == 0) {
            cout << real;
        } else if (real == 0) {
            if (imag == 1) cout << "i";
            else if (imag == -1) cout << "-i";
            else cout << imag << "i";
        } else {
            cout << real;
            if (imag > 0) cout << " + " << imag << "i";
            else cout << " - " << -imag << "i";
        }
    }

    // Operator overloads for convenience
    Complex operator+(const Complex& other) const { return add(other); }
    Complex operator*(const Complex& other) const { return multiply(other); }
    Complex operator/(const Complex& other) const { return divide(other); }

    friend ostream& operator<<(ostream& os, const Complex& c) {
        if (c.imag == 0) os << c.real;
        else if (c.real == 0) {
            if (c.imag == 1) os << "i";
            else if (c.imag == -1) os << "-i";
            else os << c.imag << "i";
        } else {
            os << c.real;
            if (c.imag > 0) os << " + " << c.imag << "i";
            else os << " - " << -c.imag << "i";
        }
        return os;
    }
};

int main() {
    cout << fixed << setprecision(4);

    // Create some complex numbers
    Complex a(3, 4);          // 3 + 4i
    Complex b(1, -2);         // 1 - 2i
    Complex iota(0, 1);       // the imaginary unit i (iota)

    cout << "a = "; a.print(); cout << endl;
    cout << "b = "; b.print(); cout << endl;
    cout << "iota (i) = "; iota.print(); cout << endl << endl;

    // Addition
    Complex sum = a.add(b);
    cout << "a + b = "; sum.print(); cout << endl;

    // Multiplication
    Complex prod = a.multiply(b);
    cout << "a * b = "; prod.print(); cout << endl;

    // Division
    Complex quot = a.divide(b);
    cout << "a / b = "; quot.print(); cout << endl;

    // Conjugate
    Complex conjA = a.conjugate();
    cout << "conjugate(a) = "; conjA.print(); cout << endl;

    // Demonstrating iota (i)
    cout << "\n--- Working with iota (i) ---\n";
    cout << "i * i = "; (iota * iota).print(); cout << endl;
    cout << "1 / i = "; Complex(1, 0).divide(iota).print(); cout << endl;
    cout << "conjugate(i) = "; iota.conjugate().print(); cout << endl;

    // Using operators
    cout << "\nUsing operators:\n";
    cout << "a + b = " << (a + b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    return 0;
}