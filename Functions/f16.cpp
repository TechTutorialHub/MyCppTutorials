// //Call by Reference
// //In Call by Reference, the function receives the reference to the argument, allowing it to modify the actual variable.
// //Swap Two Numbers (Call by Reference)
// //This function swaps two numbers, and the changes are reflected in main.

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b);

// int main() {
//     int x = 5, y = 10;
//     cout << "Before swap: x = " << x << ", y = " << y << endl;
//     swap(x, y);
//     cout << "After swap: x = " << x << ", y = " << y << endl;
//     return 0;
// }

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

