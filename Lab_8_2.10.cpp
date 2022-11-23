#include <iostream>

using namespace std;

int main(void) {
    
    int n;
    
    vvid : cout << "Enter the value grater than 1: ";
    cin >> n;
    
    if(n>1 && n <44){
        
    cout << '+';
    for(int i = 0; i < n; i++)
     cout << '-';
    cout << '+' << endl;
    for(int i = 0; i < n; i++) {
     cout << '|';
     for(int j = 0; j < n; j++)
      cout << ' ';
         cout << '|' << endl;
         }
         cout << '+';
         for(int i = 0; i < n; i++)
         cout << '-';
         cout << '+' << endl;
    }
    else if(n>43){
        cout << "The square is out of bounds!";
        cout << '\n';
        goto vvid;
        }
    else{
        cout << "You entered the value less than 1!";
        cout << '\n';
        goto vvid;
        }
         
    return 0;
}