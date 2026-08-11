#include<iostream>
using namespace std;

class Rishabh{
    float roll , marks;
    public:
    Rishabh(){
        cout<<"Enter roll : ";
        cin>>roll;
        cout<<"Enter marks : ";
        cin>>marks;
    }
    void display(){
        cout<<"roll : "<<roll;
        cout<<"marks : "<<marks;
    }
};
int main(){
    Rishabh obj;
    obj.display();
    return 0;
}