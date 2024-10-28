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
        cout << "3. Exit\n";
        cout << "Enter your choice: (1 and 2) ";
        cin >> choice;
        
      
        if (choice == 1) {
            cout << "Enter lower and upper limit ";
            cin >> lowerlimit >> upperlimit;
        
            cout << "Odd numbers from " << lowerlimit << " to " << upperlimit << endl;
            for (int i = lowerlimit; i<= upperlimit; i++){
                if (i % 2 != 0){
                    cout << i << " ";
                }
            }
            cout << endl;
            
        }else if (choice == 2){
            cout << "Enter lower and upper limit ";
            cin >> lowerlimit >> upperlimit;
        
            cout << "Even numbers from " << lowerlimit << " to " << upperlimit << endl;
            for (int i = lowerlimit; i<= upperlimit; i++){
                if (i % 2 == 0){
                    cout << i << " ";
                }
            }
            cout << endl;
        }else if (choice==3){
            exit(1);
        }else{
            cout << "Invalid choice: Press 1 and 2 only "<< endl;
            //continue;
        }
        
        cout << "Try again (Y/N) ";
        cin >> tryAgain;
        
    }while(tryAgain =='y' || tryAgain =='Y');
    cout << "Exit Program...";
    return 0;
}
