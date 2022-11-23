#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ int mas[4][6] = {{1, 2, 5, 20, 9, 1}, {4, 4, 4, 4, 4, 4}, {6, 2, 15, 1, 1, 2}, {9, 7, 3, 7, 8, 2}};
  int k = 0;
  int c = 0;
    for(int j = 0; j < 6; ++j){ 
        k=0;
        for(int i = 0; i < 4; ++i)
        k = k  + mas[i][j];
        c = c + 1;
        cout << "for " << c <<" column sum = " << k << endl;
    }
} 
