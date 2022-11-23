#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;


    cout << "Enter size of array:" << endl;
    cin >> n;

    int* array = new int[n];

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int positiveNumber = -1;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0 && positiveNumber < 0) {
            positiveNumber = array[i];
            array[i] = 0;
            cout << array[i] << " ";
        }
        else {
            if (positiveNumber<=0)
            {
                positiveNumber = 1;
            }
            cout << array[i] << " ";
        }
    }

    cout << endl;
   

    delete[] array;

    return 0;
}