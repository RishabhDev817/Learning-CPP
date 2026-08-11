#include<iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int (*operation)(int, int); 
    int a , b;
    int choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your choice (1 for addition, 2 for multiplication): ";
    cin >> choice;
    if (choice == 1) {
        operation = add; // Assigning function pointer to add function
        cout << "Result: " << operation(a, b) << endl; // Calling the function through the pointer        
    } else if (choice == 2) {
        operation = multiply; // Assigning function pointer to multiply function
        cout << "Result: " << operation(a, b) << endl; // Calling the function through the pointer      
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}