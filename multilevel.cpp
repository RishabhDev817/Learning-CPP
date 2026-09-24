#include<iostream>
using namespace std;

class grandfather{
    public: 
    string property;
    void printProperty(){
        cout<<"Grandfather's property: "<<property<<endl;
    }
};

class father: public grandfather {
    public:
    string car;
    void printCar(){
        cout<<"Father's car: "<<car<<endl;
    }
};

class son: public father{
    public:
    string bike;
    void printBike(){
        cout<<"Son's bike: "<<bike<<endl;
    }
};
int main(){
    son s;
    s.property = "House";
    s.car = "Toyota";
    s.bike = "Yamaha";
    s.printProperty();
    s.printCar();
    s.printBike();
    return 0;
}