#include<iostream>
using namespace std ;

class student{
    private:
    string name;
    float roll , marks ;
    public:
    void getdata(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter roll :";
        cin>>roll;
        cout<<"enter marks :";
        cin>>marks;
    }
    friend void show(student obj);
};
void show(student obj){
    cout<<"name :"<<obj.name<<endl;
    cout<<"roll :"<<obj.roll<<endl;
    cout<<"marks :"<<obj.marks<<endl;
}
int main(){
    student obj;
    obj.getdata();
    show(obj);
    return 0;
}
