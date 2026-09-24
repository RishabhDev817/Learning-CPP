#include<iostream>  
using namespace std;
class device{
    public:
    string name;
    void printName(){
        cout<<"Device name: "<<name<<endl;
    }
};
class phone:{
    public:
    string model;
    void printModel(){
        cout<<"Phone model: "<<model<<endl;
    }
};
class smartphone: public phone, public device{
    public:
    string os;
    void printOS(){
        cout<<"Smartphone OS: "<<os<<endl;
    }
};
int main(){
    smartphone s;
    s.name = "iPhone";
    s.model = "iPhone 12";
    s.os = "iOS";
    s.printName();
    s.printModel();
    s.printOS();
    return 0;
}