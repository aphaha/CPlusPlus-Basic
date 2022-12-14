#include <iostream>

using namespace std;

int main(void) {
    
    double pi4 = 0.;
    long n;
    cout << "Number of iterations: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0) 
        pi4 += (1./(i * 2 - 1));
        else
        pi4 -= (1./(i * 2 - 1));
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}