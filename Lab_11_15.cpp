#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[3][3] = {{1, 2, 5},{4, 4, 4}, {6, 2, 15}};
    
int sum1 = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j){
                sum1 = sum1 + mas[i][j];
            }
            
        }
    }
    
int sum2 = 0;

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2){
                sum2 = sum2 + mas[i][j];
            }
            
        }
    }
    
    
    cout << "The sum of the main diagonal  = " << sum1 << endl;
    cout << "The sum of the side diagonal  = " << sum2 << endl;
} 
