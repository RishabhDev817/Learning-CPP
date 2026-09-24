# include <iostream>
#include <string>
using namespace std;

class Student {
    int rollno;
    string name;
    string ClassName;
public:
    Student(){
        cout << "Default constructor called" << endl;
    }
    Student(int r, string n, string c) {
        this->rollno = r;
        this->name = n;
        this->ClassName = c;
        cout << "Parameterized constructor called" << endl;
    }
    ~Student() {
        cout << "Destructor called" << endl;
    }
    void GetDetails() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << ClassName << endl;
    }
};
int main() {
    Student s3;
    Student s1(1, "John", "10th");
    s1.GetDetails();
    Student s2(s1);
    s2.GetDetails();
}