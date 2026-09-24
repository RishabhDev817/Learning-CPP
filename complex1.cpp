#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(int r= 0, int i=0){
        real = r;
        imag = i;
}
   void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator+(Complex const &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main(){
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}