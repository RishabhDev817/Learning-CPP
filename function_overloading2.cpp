#include<iostream>
using namespace std;

class Shopping{
    public:
    void bill(int price){
        cout<<"Total bill: "<<price<<endl;
    }
    void bill(int price, int discount){
        cout<<"Total bill after discount: "<<price-discount<<endl;  
}

    void bill(int price, int discount, int tax){
        cout<<"Total bill after discount and tax: "<<price-discount+tax<<endl;  
    }
};
int main(){
    Shopping obj;
    obj.bill(1000);
    obj.bill(1000, 200);
    obj.bill(1000, 200, 50);
    return 0;
}
