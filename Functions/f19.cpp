// //Function Overloading
// //Function Overloading allows multiple functions to have the same name with different parameter types or counts.
// //Area Calculation (Overloading for Different Shapes)
// //This example overloads a function to calculate the area of a square, rectangle, and circle.

// #include <iostream>
// using namespace std;

// double area(double side);
// double area(double length, double width);
// double area(double radius, bool isCircle);

// int main() {
//     cout << "Area of square (side 5): " << area(5) << endl;
//     cout << "Area of rectangle (5 x 10): " << area(5.1, 10.1) << endl;
//     cout << "Area of circle (radius 7): " << area(7, true) << endl;
//     return 0;
// }

// double area(double side) {
//     return side * side;
// }

// double area(double length, double width) {
//     return length * width;
// }

// double area(double radius, bool isCircle) {
//     if (isCircle)
//         return 3.14159 * radius * radius;
//     return 0;  // Only applies if the bool flag indicates it's a circle
// }
