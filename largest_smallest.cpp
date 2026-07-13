#include<iostream>
using namespace std;
 
int main(){
    int i , n;
    int arr[100];

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
cout<<"Largest number is  "<<largest<<endl;
cout<<"Smallest number is "<<smallest;

return 0;
}
