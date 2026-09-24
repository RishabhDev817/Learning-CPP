#include<iostream>
using namespace std;

class student{
public:
    string name , Class ;
    float marks , highest_marks; 

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
    cout << name << "\t" << Class << "\t" << roll << "\t" << marks << endl;
}
};

int main(){
    student obj[3];
    for(int i=0;i<3;i++){
        obj[i].getdata();
    }
    
    for(int i=0;i<3;i++){
        obj[i].show();
    }

return 0;
}
