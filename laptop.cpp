#include<iostream>
#include<string>
using namespace std;

class Laptop{
    public:
    string brand;
    string model;
    float price;

    public:
    Laptop(string b , string m , float p){
        brand = b;
        model = m; 
        price = p;

    }
    void display(){
        cout<<"Brand : "<<brand<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Price : "<<price<<endl;
    }

};
int main(){
    Laptop laptop1("Dell" , "XPS 13" , 999.99);
    Laptop laptop2("Apple" , "MacBook Pro" , 1999.99);

    laptop1.display();
    cout<<endl;
    laptop2.display();

    return 0;
}

