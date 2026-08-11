#include<iostream>
using namespace std;

class  BankAccount{
    public:
    string accountHolderName;
    string accountNumber;  
    float balance;

     BankAccount(){
        accountHolderName = "Rishabh";
        accountNumber = "1234567890";
        balance = 1000000000.0;
    }
    BankAccount(string name , string number , float bal){
        accountHolderName = name;
        accountNumber = number;
        balance = bal;
    }
    void display(){
        cout<<"Account Holder Name : "<<accountHolderName<<endl;
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    };
    int main(){
        BankAccount account1;
        account1.display();
        cout<<endl;
        BankAccount account2("John Doe" , "9876543210" , 5000.0);
        account2.display();
        return 0;       
        
    }