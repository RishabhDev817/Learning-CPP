#include<iostream>
using namespace std;

class bank{
    public:
    string accountHolderName;
    string accountNumber;
    float balance;
    bank(){
        cout<<"Enter account holder name : ";
        cin>>accountHolderName;
        cout<<"Enter account number : ";
        cin>>accountNumber;
        cout<<"Enter balance : ";
        cin>>balance;
    }
};  
void display(bank b){
    cout<<"Account Holder Name : "<<b.accountHolderName<<endl;
    cout<<"Account Number : "<<b.accountNumber<<endl;
    cout<<"Balance : "<<b.balance<<endl;
}
int main(){
    bank b1;
    display(b1);
    return 0;
}