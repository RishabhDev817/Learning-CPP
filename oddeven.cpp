/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%2 == 0){
        cout<< num << " is even ";
    }else{
        cout<< num <<" is odd ";
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int evenOdd(int num){
    if(num%2 == 0){
        cout << num << " is even.";
    }else{
        cout<< num << " is odd.";
    }
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    evenOdd(num);
    return 0;
}