#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    if(y==0){
        cout<<"Division by zero is not allowed."<<endl;
        return 0;
    }
    return x/y;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition: "<<add(a,b)<<endl;
    cout<<"Subtraction: "<<subtract(a,b)<<endl;
    cout<<"Multiplication: "<<multiply(a,b)<<endl;
    cout<<"Division: "<<divide(a,b)<<endl;
    return 0;
}