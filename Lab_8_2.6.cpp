#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c0;
    int i =0;
   
    vvid : cout << "Enter the value grater than 0: ";
    cin >> c0;
    
    if (c0>0){
        do{
            if(c0%2==0){
                c0 = c0/2;
                cout << c0;
                cout << '\n';
                i++;
                }
            else{
                c0 = c0*3+1;
                cout << c0;
                cout << '\n';
                i++;
                }
             }while(c0!=1);
             cout << "Steps = ";
             cout << i;
        }
    else{
        cout << "You entered the value less than 0!";
        cout << '\n';
        goto vvid;
        }
 
  return 0;
  
}