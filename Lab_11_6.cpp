#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main(){ 
    
int mas[4][7] = {{1, 2, 5, 6, 5, 7, 2},{4, 4, 4, 9999, 45, 8, 34}, {6, 2, 15, 1, 9, 0, 7}, {18, 88, 8, 80, 5, 8, 4}};

int min;
min = mas[0][0];
    
int indexI = 0;
int indexJ = 0;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (mas[i][j] < min)
            {
                min = mas[indexI = i][indexJ = j];
            }
        }
    }
    
    cout << "Max = " << min << endl;
    cout << "Еhe number of the max element of the array = [" << indexI << "][" << indexJ << "]" ;
} 
