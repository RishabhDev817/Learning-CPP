#include<iostream>
using namespace std;

class rectangle{
    private:
    float length , breadth ;

    public :
    void getdata(){
        cout<<"enter length : ";
        cin>>length;
        cout<<"enter breadth : ";
        cin>>breadth;
    }
    friend void show(rectangle obj);
};
void show(rectangle obj){
    float area;
    area = obj.length * obj.breadth;
    cout<<"Area of rectangle is "<<area;
}
int main(){
    rectangle obj;
    obj.getdata();
    show(obj);
    return 0;
}