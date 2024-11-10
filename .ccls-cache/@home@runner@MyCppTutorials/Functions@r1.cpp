// #include <iostream>
// #include <iomanip>
// using namespace std;

// // Function prototype
// int factorial(int n, int depth);

// int main() {
//     int number;
//     cout << "Enter a number to calculate its factorial: ";
//     cin >> number;

//     int result = factorial(number, 0);
//     cout << "\nFactorial of " << number << " is: " << result << endl;

//     return 0;
// }


// int factorial(int n, int depth) {
 
//     cout << setw(depth * 2) << "" << "factorial(" << n << ") called" << endl;

//     // Base case
//     if (n == 0) {
//         cout << setw(depth * 2) << "" << "Returning 1 (base case)" << endl;
//         return 1;
//     }

//     // Recursive case
//     cout << setw(depth * 2) << "" << "Calculating " << n << " * factorial(" << n - 1 << ")" << endl;
//     int result = n * factorial(n - 1, depth + 1); 

//     // Display the return value at the current recursion level
//     cout << setw(depth * 2) << "" << "Returning " << result << " from factorial(" << n << ")" << endl;
//     return result;
// }
