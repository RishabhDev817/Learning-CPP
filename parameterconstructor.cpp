#include <iostream>
#include <string>
using namespace std;

class AreaCalculator {
public:
    double area; 

   
    AreaCalculator(double length, double width) {
        area = length * width;
    }

   
    AreaCalculator(double radius) {
        area = 3.14 * radius * radius;
    }
     AreaCalculator(double side) {
        area = side * side;
    }
};

int main() {
    
    AreaCalculator rectangleObj(5.0, 3.0); 
    cout << "Area of Rectangle: " << rectangleObj.area << endl;


    AreaCalculator circleObj( 4.0);
    cout << "Area of Circle: " << circleObj.area << endl;

    AreaCalculator squareObj(5.0);
    cout << "Area of Square: " << squareObj.area << endl;

    return 0;
}