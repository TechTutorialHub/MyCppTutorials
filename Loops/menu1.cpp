//Create menu 
//Odd numbers / Even numbers 

#include <iostream>
using namespace std;

int main() {
    int lowerlimit, upperlimit, choice;
    char tryAgain;
    do  {
        //Display the menu
        cout << "MENU \n";
        cout << "1. Display Odd Numbers: \n";
        cout << "2. Display Even Numbers: \n";
        cout << "Enter your choice: (1 and 2) ";
        cin >> choice;
        
        cout << "Enter lower and upper limit ";
        cin >> lowerlimit >> upperlimit;
        
        if (choice == 1) {
            cout << "Odd numbers from " << lowerlimit << " to " << upperlimit << endl;
            for (int i = lowerlimit; i<= upperlimit; i++){
                if (i % 2 != 0){
                    cout << i << " ";
                }
            }
            cout << endl;
            
        }else if (choice == 2){
            cout << "Even numbers from " << lowerlimit << " to " << upperlimit << endl;
            for (int i = lowerlimit; i<= upperlimit; i++){
                if (i % 2 == 0){
                    cout << i << " ";
                }
            }
            cout << endl;
        }else{
            cout << "Invalid choice: Press 1 and 2 only "<< endl;
            continue;
        }
        
        cout << "Try again (Y/N) ";
        cin >> tryAgain;
        
    }while(tryAgain =='y' || tryAgain =='Y');
    cout << "Exit Program...";
    return 0;
}
