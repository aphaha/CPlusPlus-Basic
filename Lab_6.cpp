#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, i, sum;
    cout << "Enter the value: ";
    cin >> N;
    i = 4;
    sum = 0;
    
    while(i <= N){
        i = i + 1;
        sum = sum + 1;
        
    }
     cout << "The number of digits greater than three: " << sum;
    return 0;
}
