#include<iostream>
using namespace std;

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int smallest(int arr[], int n) {
    int min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max = largest(arr, n);
    int min = smallest(arr, n);
    cout << "Largest element in the array: " << max << endl;
    cout << "Smallest element in the array: " << min << endl;
    return 0;
}