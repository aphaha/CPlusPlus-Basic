#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[3][4] = {{1, 2, 5, 6},{4, 4, 4, 9999}, {6, 2, 15, 1}};

int max;
max = mas[0][0];
    
int indexI = 0;
int indexJ = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mas[i][j] > max)
            {
                max = mas[indexI = i][indexJ = j];
            }
        }
    }
    
    cout << "Max = " << max << endl;
    cout << "Еhe number of the max element of the array = [" << indexI << "][" << indexJ << "]" ;
} 
