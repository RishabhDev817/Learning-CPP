#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int rollNumber;
    string course;

    public:
    void inputDetails(){
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter course: ";
        cin >> course;
    }
    void displayDetails(){
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};
int main(){
    Student student;
    student.inputDetails();
    student.displayDetails();
    return 0;
}
