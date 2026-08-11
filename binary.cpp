#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int search) {
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == search) {
            return m; 
        }
        else if (arr[m] < search) {
            l = m + 1; 
        }
        else {
            r = m - 1; 
        }
    }
    return -1; 
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted order): ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int search;
    cout << "Enter the element to search for: ";
    cin >> search;

    int result = binarySearch(arr, n, search);
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}