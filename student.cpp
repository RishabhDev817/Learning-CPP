#include<iostream>
using namespace std;

class student{
public:
    string name , Class ;
    float marks; 

public:
void getdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter class : ";
    cin>>Class;
    cout<<"Enter marks : ";
    cin>>marks;
}

void show(){
    cout << name << "\t" << Class << "\t" << marks << endl;
}
};

int main(){
    student obj[5];
    float highest_marks;

    for(int i=0;i<5;i++){
        obj[i].getdata();
    }
    
    cout << "\nName\tClass\tMarks\n";
    
    for(int i=0;i<5;i++){
        obj[i].show();
    }

    highest_marks = obj[0].marks;
    for(int i=1;i<5;i++){
        if(obj[i].marks > highest_marks){
            highest_marks = obj[i].marks;
        }
    }

    cout << "Highest marks: " << highest_marks << endl;

    return 0;
}
