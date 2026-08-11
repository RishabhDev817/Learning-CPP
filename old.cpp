#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age : ";
    cin>>age;
    if(age >= 65){
        cout<<"Eligible for senior discount.";
    }
    return 0;
}