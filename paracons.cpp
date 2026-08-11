#include<iostream>
using namespace std ;

class bankholder{
    public:
    string name , address ;
    float phone , balance ;
    public:
    bankholder(string n , string a , float p , float b){
        name=n;
        address=a;
        phone=p;
        balance=b;
    }
    void show(){
        cout<<"Customer name : "<<name;
        cout<<"Address : "<<address;
        cout<<"Phone number : "<<phone;
        cout<<"Bank balance : "<<balance;
    }
};
int main(){
    bankholder bmk("ri","asdd",12345,12344);
    bmk.show();
    return 0;
}