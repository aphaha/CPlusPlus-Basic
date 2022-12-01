#include <iostream>
#include <cmath>
using namespace std;

struct Date{
    int hours = 0;
    int minutes = 0;
};

int main()
{
    Date date;
    int time;
    int h;
    int m;
    int x;
    
    cout << "Enter hours: ";
    cin >> date.hours;
    
    cout << "Enter minutes: ";
    cin >> date.minutes;
    
    cout << "Enter time elapsed(in minutes): ";
    cin >> time;
    
    if(date.hours < 24 && date.minutes < 60){
        m = date.hours * 60 + date.minutes + time;
        h = m / 60;
        m %= 60;
        
        if(h > 23){
            x = trunc(h) / 24;
            h = h - trunc(x) * 24;
        }
        
        cout << h << ":" << m;
    }
    else{
        cout << "Error: wrong time entered";
    }
    
    

    return 0;
}
