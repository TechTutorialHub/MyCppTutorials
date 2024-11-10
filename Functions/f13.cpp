// //Call by Value
// ///In Call by Value, a copy of the argument’s value is passed to the function. Any changes made to the parameter inside the function do not affect the original argument.
// //Swap Two Numbers (Call by Value)
// //This function attempts to swap two numbers but won’t affect the actual variables in main.

// #include <iostream>
// using namespace std;

// void swap(int a, int b);

// int main() {
//     int x = 5, y = 10;
//     cout << "Before swap: x = " << x << ", y = " << y << endl;
//     swap(x, y);
//     cout << "After swap (in main): x = " << x << ", y = " << y << endl;
//     return 0;
// }

// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "After swap (inside function): a = " << a << ", b = " << b << endl;
// }
