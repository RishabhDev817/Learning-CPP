#include<iostream>
using namespace std;

void prime(int n){
    int i, j, flag;
    cout<<"Prime numbers between 1 and "<<n<<" are: ";
    for(i=2; i<=n; i++){
        flag = 0;
        for(j=2; j<=i/2; j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout<<i<<" ";
    }
}