#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a word: ";
    cin >> a;
    if(a >= 'A' && a <= 'Z'){
        cout << "The letter is uppercase." << endl;
    } else if(a >= 'a' && a <= 'z'){
        cout << "The letter is lowercase." << endl;
    } else {
        cout << "The input is not a letter." << endl;
    }
    return 0;
}