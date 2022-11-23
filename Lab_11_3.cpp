#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ int mas[5][7] = {{1, 2, 5, 20, 5, 13, 1},{4, 4, 4, 4, 4, 4, 4}, {6, 2, 15, 1, 23, 4, 6}, {9, 7, 3, 7, 15, 9, 10}, {2, 2, 2, 2, 2, 2, 2}};
 int k = 0;
 int c = 0;
    for(int i = 0; i < 5; ++i){ 
        k=0;
        for(int j = 0; j < 7; ++j)
        k = k  + mas[i][j];
        c = c + 1;
        cout << "for " << c <<" line sum = " << k << endl;
    }
} 
