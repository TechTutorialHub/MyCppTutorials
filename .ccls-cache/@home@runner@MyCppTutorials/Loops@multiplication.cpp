/*
[1] Display a simple multiplication table in a single line (e.g., 8 16 24 ...).
[2] Display a detailed multiplication table in a formatted way (e.g., 8 * 1 = 8).
[3] Display a full multiplication table grid up to n x 10.
*/

#include <iostream>
using namespace std;

int main() {
    int choice,n;
    char tryAgain;
    
    do {
        cout << "Choose an option \n";
        cout << "[1]. Multiplication table 1\n";
        cout << "[2]. Multiplication table 2\n";
        cout << "[3]. Multiplication table 3\n";
        cout << "Enter your choice (1,2 and 3): ";
        cin >> choice;

        switch(choice) {        
            case 1:
                //single line
                cout << "Enter n ";
                cin >> n;
                cout << "Multiplication table for " << n << endl;
                for (int i = 1; i<=10; i++) {
                    cout << n * i << "\t";
                }
                cout << endl;
                break;
            case 2:
                //formatted multiplication table
                cout << "Enter n ";
                cin >> n;
                cout << "Formatted Multiplication table for " << n << endl;
                for (int i = 1; i<=10; i++) {
                    cout << n << " * " << i << " = " << n*i << endl;
                }
                break;
            case 3:
                //table grid
                cout << "Enter n ";
                cin >> n;
                cout << "Grid type Multiplication table for " << n << endl;
                for (int i=1; i<=n; i++){
                    for (int j=1; j<=10;j++){
                        cout << i*j << "\t";
                    }
                    cout << endl;
                }
                break;
            default:
                cout << "Invalid choice.";
                continue;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> tryAgain;
        
    }while(tryAgain =='y' || tryAgain == 'Y');
    cout << "Exiting the program. Goodbye!"<< endl;
    return 0;
}