#include<iostream>
using namespace std;

class Area{
    public:
    int area(float r){
        return 3.14*r*r;
    }
    int area(int l, int b){
        return l*b;
    }
    int area(int s){
        return s*s;
    }
}
;
int main(){
    Area obj;
    cout<<"Area of Circle: "<<obj.area(5)<<endl;
    cout<<"Area of Rectangle: "<<obj.area(5, 10)<<endl;
    cout<<"Area of Square: "<<obj.area(5)<<endl;
    return 0;
}