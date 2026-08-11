#include<iostream>
using namespace std;

void insert(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";        
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    insert(arr, n);
    cout << "The elements of the array are: ";
    display(arr, n);    
    int total = sum(arr, n);
    cout << "The sum of the elements of the array is: " << total << endl;
    return 0;
}