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
    cout << b.accountHolderName << "\t" << b.accountNumber << "\t" << b.balance << endl;
}

int main(){
    bank b[3];
    
    cout << "\nName\tAccount_No\tBalance\n";
   
    
    for(int i=0; i<3; i++){
        display(b[i]);
    }
    
    return 0;
}
