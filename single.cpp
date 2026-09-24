#include<iostream>
using namespace std;

class Person{
    public: 
    string name;
    void printName1(){
        cout<<"name: "<<name<<endl;
    }
};
class Student: public Person{
    public:
    string student_name;
    void printName(){
        cout<<"student name: "<<student_name<<endl;
    }
};
int main(){
    Student s;
    s.name = "John";
    s.student_name = "Doe";
    s.printName1();
    s.printName();
    return 0;
}