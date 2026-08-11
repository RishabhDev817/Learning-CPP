#include<iostream>
using namespace std;
int main(){
    int n , originalNum , reversedNum = 0 , remainder;
    cout<<"Enter a number : ";
    cin>>n;
    originalNum = n;

    while(n != 0){
        remainder = n%10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    if(originalNum == reversedNum){
        cout<< originalNum <<" is a palindrome number.";
    }else{
        cout<< originalNum <<" is not a palindrome number.";
    }
    return 0;
}
