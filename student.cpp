#include<iostream>
using namespace std;

class student{
public:
    string name , Class ;
    float marks , roll ; 

public:

void getdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter class : ";
    cin>>Class;
    cout<<"Enter roll : ";
    cin>>roll;
    cout<<"Enter marks : ";
    cin>>marks;
}
void show(){
    cout<<" Name : "<<name;
    cout<<" Class : "<<Class;
    cout<<" Roll : "<<roll;
    cout<<" marks : "<<marks;
}
};
int main(){
    student obj;
    obj.getdata();
    obj.show();

return 0;
}