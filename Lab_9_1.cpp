#include <iostream>

using namespace std;

int main(void) {
    
    int i;
    int m[12];


    
    cout << "Enter elements of array:" << endl;
    for (i = 0; i < 12; i++) {
        cin >> m[i];
    }
    
    for(int i=0; i<11; i++){
        cout << m[i] << ' ';
        }
        
    cout << '\n';
    
    for(int i=10; i>-1; i--){
        cout << m[i] << ' ';
        }
    
return 0;
}