#include <iostream>
using namespace std;

int main() {
    int totalSum = 0;
    int evenSum = 0;
    int oddSum = 0;

    
    for (int i = 1; i <= 10; i++) {
        totalSum = totalSum + i; 

        if (i % 2 == 0) {
            evenSum = evenSum + i; 
        } else {
            oddSum = oddSum + i;  
        }
    }

    cout << "Sum of Even Numbers: " << evenSum << endl; 
    cout << "Sum of Odd Numbers: " << oddSum << endl;   
    cout << "Total Sum: " << totalSum << endl;           

    return 0;
}
