#include<iostream>
using namespace std;    

int main(){
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;
    cout<<"Value pointed by dptr: "<<**dptr<<endl;

    *ptr = 20; 
    cout<<"New value of a: "<<a<<endl;
    
    return 0;
}