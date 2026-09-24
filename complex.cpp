#include<iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator +(Complex obj) {
        return Complex(this->real + obj.real, this->imag + obj.imag);
    }
};

int main() {
    Complex c1(1, 2);
    c1.display();
    Complex c2(2, 4);
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}