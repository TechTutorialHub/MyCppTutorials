//Enter the lower and upper limit: 10 20
//Even numbers from 10 to 20
//10 12 14 16 18 20


#include <iostream>
using namespace std;

int main() {

    int lowerlimit, upperlimit;

    cout << "Enter the lower limit and upper limit: ";
    cin >> lowerlimit >> upperlimit;

    cout << "Even numbers from " << lowerlimit << " to " << upperlimit << " are: \n";

    for (int i = lowerlimit; i <= upperlimit; i++) {

        if (i % 2 == 0) {
            cout << i << " ";            
        }

    }

    return 0;
}
