#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ int mas[6][4] = {{1, 2, 5, 20},{4, 4, 4, 4}, {6, 2, 15, 1}, {9, 7, 3, 7}, {2, 2, 2, 2}, {1, 10, 1, 4}};
 int k = 0;
    for(int j = 0; j < 4; ++j){ 
        k = 0;
        for(int i = 0; i < 6; ++i)
        if(mas[i][j] % 2==0)
        k++;
    cout << "for " << j <<" column k = " << k << endl;
    }
} 