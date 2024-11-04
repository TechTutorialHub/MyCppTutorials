#include <iostream> 
using namespace std; 
int main() { 
    int number, sum = 0; 
    cout << "Enter numbers to add to the sum (only even numbers will be added, stop if sum exceeds 50):" << endl; 
    do { 
        cout << "Enter a number: "; 
        cin >> number; 
        if (number % 2 != 0) { 
            cout << "Odd number skipped." << endl; 
            continue; // Skip odd numbers 
        } 
        sum += number; 
        cout << "Current sum: " << sum << endl; 
        if (sum > 50) { 
            cout << "Sum exceeded 50. Stopping the loop." << endl; 
            break; // Stop the loop if sum exceeds 50 
        } 
    } while (true); 
    cout << "Final sum: " << sum << endl; 
    return 0; 
} 
