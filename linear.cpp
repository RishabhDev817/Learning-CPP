#include <iostream>
using namespace std;

int main() {
    int i,k=0;
    int arr[5] = {5,2,4,9,10};
    int search =9;

    for(i=0;i<5;i++){
        if(arr[i]==search) {
            cout<<"found at index "<<i;
            k++;
            break;
        }
    
    }
    if(k==0) {
        cout<<"not found";
    }
     
}