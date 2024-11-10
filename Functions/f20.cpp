// #include <iostream>
// using namespace std;

// // Function prototypes
// int add(int a, int b);
// int subtract(int a, int b);
// int multiply(int a, int b);
// float divide(int a, int b);
// float areaRectangle(float length, float width);
// float areaCircle(float radius);
// void incrementByValue(int x);
// void incrementByReference(int& x);
// int factorial(int n);
// int power(int base, int exponent);

// int main() {
//     int choice, a, b;
//     float length, width, radius;
//     int x, n;

//     cout << "Select an option:\n";
//     cout << "1. Basic Calculator\n";
//     cout << "2. Area Calculation\n";
//     cout << "3. Increment (Pass-by-Value and Pass-by-Reference)\n";
//     cout << "4. Factorial (Recursive)\n";
//     cout << "5. Power (Recursive)\n";
//     cout << "Enter choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "\nBasic Calculator\nEnter two numbers: ";
//             cin >> a >> b;
//             cout << "Addition: " << add(a, b) << endl;
//             cout << "Subtraction: " << subtract(a, b) << endl;
//             cout << "Multiplication: " << multiply(a, b) << endl;
//             cout << "Division: " << divide(a, b) << endl;
//             break;
//         case 2:
//             cout << "\nArea Calculation\n";
//             cout << "Enter length and width for rectangle: ";
//             cin >> length >> width;
//             cout << "Rectangle Area: " << areaRectangle(length, width) << endl;
//             cout << "Enter radius for circle: ";
//             cin >> radius;
//             cout << "Circle Area: " << areaCircle(radius) << endl;
//             break;
//         case 3:
//             cout << "\nPass-by-Value and Pass-by-Reference\n";
//             cout << "Enter a number: ";
//             cin >> x;
//             incrementByValue(x);
//             cout << "After Pass-by-Value: " << x << endl;
//             incrementByReference(x);
//             cout << "After Pass-by-Reference: " << x << endl;
//             break;
//         case 4:
//             cout << "\nFactorial Calculation (Recursive)\nEnter a number: ";
//             cin >> n;
//             cout << "Factorial: " << factorial(n) << endl;
//             break;
//         case 5:
//             cout << "\nPower Calculation (Recursive)\nEnter base and exponent: ";
//             cin >> a >> b;
//             cout << "Result: " << power(a, b) << endl;
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//     }
//     return 0;
// }

// // Function implementations
// int add(int a, int b) { return a + b; }
// int subtract(int a, int b) { return a - b; }
// int multiply(int a, int b) { return a * b; }
// float divide(int a, int b) { return (b != 0) ? (float)a / b : 0; }

// float areaRectangle(float length, float width) { return length * width; }
// float areaCircle(float radius) { return 3.14159 * radius * radius; }

// void incrementByValue(int x) { x++; }
// void incrementByReference(int& x) { x++; }

// int factorial(int n) { return (n == 0) ? 1 : n * factorial(n - 1); }
// int power(int base, int exponent) { return (exponent == 0) ? 1 : base * power(base, exponent - 1); }

