// #include <iostream>
// #include <iomanip>
// using namespace std;

// int power(int base, int exponent, int depth);

// int main() {
//     int base, exponent;
//     cout << "Enter base and exponent: ";
//     cin >> base >> exponent;

//     int result = power(base, exponent, 0);
//     cout << "\n" << base << "^" << exponent << " is: " << result << endl;

//     return 0;
// }

// int power(int base, int exponent, int depth) {
//     cout << setw(depth * 2) << "" << "power(" << base << ", " << exponent << ") called" << endl;

//     if (exponent == 0) {
//         cout << setw(depth * 2) << "" << "Returning 1 (base case)" << endl;
//         return 1;
//     }

//     int result = base * power(base, exponent - 1, depth + 1);
//     cout << setw(depth * 2) << "" << "Returning " << result << " from power(" << base << ", " << exponent << ")" << endl;
//     return result;
// }
