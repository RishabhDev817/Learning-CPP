#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"Base class show() function"<<endl;
    }
};
class derived: public base{
    public:
    void show(){
        cout<<"Derived class show() function"<<endl;
    }
};
int main(){
    base *b;
    derived d;
    b = &d;
    b->show();
    return 0;
}