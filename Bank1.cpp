#include<iostream>
using namespace std;

class Account {
    int balance;
public:
    Account(int bal) {
        balance = bal;
    }
    void display() {
        cout << "Balance is displayed : "<< balance << endl;
    }
    Account operator +(Account obj){
        return Account(this->balance + obj.balance);
    }
};
int main() {
    Account a1(1000);
    a1.display();
    Account a2(2000);
    a2.display();
    Account a3 = a1 + a2;
    a3.display();
    
    
}