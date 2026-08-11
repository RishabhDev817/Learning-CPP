/*#include<iostream>
using namespace std;

void doubleValue(int &a) { //call by reference
    a = 2 * a;
}
int main(){
    int a ;
    cout<<"enter a number : ";
    cin>>a;
    doubleValue(a);
    cout<<"Double of the number is : "<<a<<endl;
}*/

#include<iostream>
using namespace std;

void doubleValue(int a) { //call by value
    a = 2 * a;
}
int main(){
    int a ;
    cout<<"enter a number : ";
    cin>>a;
    doubleValue(a);
    cout<<"Double of the number is : "<<a<<endl;
}