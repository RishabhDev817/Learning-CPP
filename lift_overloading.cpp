#include<iostream>
using namespace std;    

class Floor{
    int x;
    public:
    Floor(int a){
        this->x = a;
    }
    
    void display(){
        cout << "The floor is at floor : " << x << endl;
    }
    
    void operator--(){
        x = x - 1;
    }
    
    void operator++(){
        x = x + 1;
    }
    
    void operator++(int){
        x = x + 1;
    }
    
    void operator--(int){
        x = x - 1;
    }
};

int main(){
    Floor f1(5);
    f1.display();
    --f1;
    f1.display();
    ++f1;
    f1.display();
    f1++;
    f1.display();
    f1--;
    f1.display();
    return 0;
}
