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
    while (date.hours > 24 || date.hours < 0) {
        cout << "Error: put the number from 0 to 23" << endl;
        cin >> date.hours;
    }
    
    cout << "Enter minutes: ";
    cin >> date.minutes;
    while (date.minutes > 60 || date.minutes < 0) {
        cout << "Error: put the number from 0 to 59" << endl;
        cin >> date.minutes;
    }    
    
    cout << "Enter time elapsed(in minutes): ";
    cin >> time;
    
    m = date.hours * 60 + date.minutes + time;
    h = m / 60;
    m %= 60;
        
    if(h > 23){
        x = trunc(h) / 24;
        h = h - trunc(x) * 24;
    }
        
    cout << h << ":" << m;

    return 0;
}