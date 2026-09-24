#include<iostream>
using namespace std;
class Student{
    int marks;
    public:
    Student(int m){
        this->marks = m;
    }
    bool operator<(Student const &s){
        return this->marks > s.marks;
    }
};
int main(){
    Student s1(90), s2(80);
    if(s1 < s2){
        cout<<"s1 has more marks than s2"<<endl;
    }else{
        cout<<"s2 has more marks than s1"<<endl;
    }
    return 0;
}
