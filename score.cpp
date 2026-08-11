#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter your score : ";
    cin>>score;
    if(score >= 90){
        cout<<"You passed with grade A.";
    }else if(score >= 70){
        cout<<"You passed with grade B.";
    }else if(score >= 50){
        cout<<"You passed with grade C.";
    }else{
        cout<<"You got grade D.";
    }
    return 0;
}