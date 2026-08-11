#include<iostream>
using namespace std;

int main(){
    int num[3]={1,2,3};
    num[3]=4;

    for(int i = 0; i < 3 ; i++){
        cout<<"address ["<< i << "] =" << &num[i] << endl; 
    }
    return 0;
}