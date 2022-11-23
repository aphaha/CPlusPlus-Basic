#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[6] = {1, 4, 6, 8, 9, 2};

    cout << "Array: ";
	for(int i = 0; i<6; i++) 
	{
		cout << mas[i] << " "; 
	}
	cout << endl;
	
int a = 0;

for (int i = 0; i < 6; i++) {
        if (mas[i] == 0) {
            a = 1;
            cout <<  "Index of first zero element: " << i;
            break;
        }
        
    }
    
for (int i = 0; i < 6; i++) {    
    if (mas[i] != 0 && a == 0) {
            cout <<  "Array doesn't contain 0";
            break;
        }
    }
}