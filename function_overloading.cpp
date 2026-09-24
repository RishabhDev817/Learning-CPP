#include<iostream>
using namespace std;

class Add {
    int a, b;
    float c;
public:
    int add(int x, int y) {
        a = x;
        b = y;
        cout << "Sum of two integers: " << a + b << endl;
        return a + b;
    }
    float add(int x , int y, float z) {
        a = x;
        b = y;
        c = z;
        cout << "Sum of two integers and one float: " << a + b + c << endl;
        return a + b + c;
    }
}
;
int main() {
    Add obj;
    obj.add(10, 20);
    obj.add(10, 20, 30.5);
    return 0;
}
