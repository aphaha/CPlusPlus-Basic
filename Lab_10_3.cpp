#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[6] = {1, 4, 6, 8, 9, 2};

int max = mas[0];
int min = mas[0];

int a = 0;
int b = 0;

int temp;

cout << "Unchanged array: |";
	for(int i = 0; i<6; i++) 
	{
		cout << mas[i] << "|"; 
	}
	cout << endl;
	
    
    for (int i = 0; i < 6; i++) {
        if (mas[i] > max) {
            max = mas[i];
            a = i;
            
        }
        if (mas[i] < min) {
            min = mas[i];
            b = i;
        }
    }
    
    temp = mas[a];
    mas[a] = mas[b];
    mas[b] = temp;
    
cout << "Changed array:   |";
	for(int i = 0; i<6; i++) 
	{
		cout << mas[i] << "|"; 
	}
	cout << endl;   
    
} 
