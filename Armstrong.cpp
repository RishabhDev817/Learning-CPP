#include<iostream>
using namespace std;
int main(){
    int n, originalNum, result = 0, remainder;
    cout<<"Enter a number : ";
    cin>>n;
    originalNum = n;
    
    while(originalNum != 0){
        remainder = originalNum % 10;
        result += (remainder * remainder * remainder);
        originalNum /= 10;
    }
    if(result == n){
        cout<< n <<" is an Armstrong number.";
    }else{
        cout<< n <<" is not an Armstrong number.";
    }
}