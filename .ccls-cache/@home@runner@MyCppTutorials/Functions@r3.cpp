
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int sum(int n, int depth);

// int main() {
//     int number;
//     cout << "Enter a number to find the sum of natural numbers up to: ";
//     cin >> number;

//     int result = sum(number, 0);
//     cout << "\nSum of numbers from 1 to " << number << " is: " << result << endl;

//     return 0;
// }

// int sum(int n, int depth) {
//     cout << setw(depth * 2) << "" << "sum(" << n << ") called" << endl;

//     if (n == 0) {
//         cout << setw(depth * 2) << "" << "Returning 0 (base case)" << endl;
//         return 0;
//     }

//     int result = n + sum(n - 1, depth + 1);
//     cout << setw(depth * 2) << "" << "Returning " << result << " from sum(" << n << ")" << endl;
//     return result;
// }
