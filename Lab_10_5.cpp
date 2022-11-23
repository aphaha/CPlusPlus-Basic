#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[6] = {1, 4, 6, 8, 9, 2};

int max1 = mas[0];
int max2;
    cout << "Array: ";
	for(int i = 0; i<6; i++) 
	{
		cout << mas[i] << " "; 
	}
	cout << endl;
	
    
for (int i = 0; i < 6; i++) {
        if (mas[i] > max1) {
            max2 = max1;
            max1 = mas[i];
        }
        else if (mas[i] > max2) {
            max2 = mas[i];
        }
        
    }
    cout << "Second max number: " << max2;
}