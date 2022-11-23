#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[6] = {1, 4, 6, 8, 9, 2};

int A;
cout << "Enter the number: ";
cin >> A;

cout << "Unchanged array: ";

	for(int i = 0; i<6; i++) 
	{
		cout << mas[i] << " "; 
	}
	cout << endl;
	
    
cout << "Changed array: ";
	for(int i = 0; i<6; i++) 
	{
		if (mas[i] > A){
		    cout << mas[i] << " "; 
		} 
	  
	}
    
} 
