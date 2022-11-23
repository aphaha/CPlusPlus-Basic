#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ int mas[4][3] = {{1, 2, 3},{4, 4, 4}, {6, 7, 8}, {9, 7, 3}};
 int k = 0;
    for(int i = 0; i < 4; ++i){ 
        k = 0;
        for(int j = 0; j < 3; ++j)
        if(mas[i][j] % 2==0)
        k++;
    cout << "for " << i <<" line k = " << k << endl;
    }
} 