#include<iostream>
using namespace std;

class number{
    int x ;
    public:
    number(int a){
        this->x = a;
    }
    void display(){
        cout<<"The number is : "<<x<<endl;
    }
    void operator+(number n){
        number temp(0);
        temp.x = this->x + n.x;
        temp.display();
    }
};
int main(){
    number n1(5), n2(10);
    n1+n2;
    n1.display();
    return 0;
}