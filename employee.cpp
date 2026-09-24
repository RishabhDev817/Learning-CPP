#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float Annual_salary;
    float Monthly_salary;
    
    void getdata(){
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Monthly salary : ";
        cin >> Monthly_salary;

    }
    
    
    void showdata(){
        cout << id << "\t" << Monthly_salary << "\t\t" << Annual_salary << endl;
    }
};

int main(){
    employee obj[3];
    
    for(int i = 0; i < 3; i++){
        cout << "Employee " << (i + 1) << ":\n";
        obj[i].getdata();
    }
    

    for(int i = 0; i < 3; i++){
        obj[i].Annual_salary = obj[i].Monthly_salary * 12;
    }
    
    cout << "\nID\tMonthly Salary\tAnnual Salary\n";
    
    for(int i = 0; i < 3; i++){
        obj[i].showdata();
    }
    
    return 0; 
}
