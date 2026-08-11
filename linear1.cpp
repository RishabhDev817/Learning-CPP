#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int search) {
    for(int i=0; i<n; i++) {
        if(arr[i] == search) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int search;
    cout << "Enter the element to search for: ";
    cin >> search;
    
    int result = linearSearch(arr, n, search);
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}