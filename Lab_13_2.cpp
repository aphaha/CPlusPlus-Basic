#include <iostream>
#include <cmath>
using namespace std;

struct Date{
    int hours = 0;
    int minutes = 0;
};

int main()
{
    Date start;
    Date finish;
    
    int h;
    int m;
    // int x;
    
    cout << "Enter start hours: ";
    cin >> start.hours;
    
    cout << "Enter start minutes: ";
    cin >> start.minutes;
    
    cout << "Enter finish hours: ";
    cin >> finish.hours;
    
    cout << "Enter finish minutes: ";
    cin >> finish.minutes;
    
    
    if(start.hours < 24 && start.minutes < 60 && finish.hours < 24 && finish.minutes < 60){
        
        if(start.hours > finish.hours && start.minutes > finish.minutes){
            h = start.hours - finish.hours;
            m = start.minutes - finish.minutes;
        
            cout << h << ":" << m;
        }
        
        else if(finish.hours > start.hours && finish.minutes > start.minutes){
            h = finish.hours - start.hours;
            m = finish.minutes - start.minutes;
        
            cout << h << ":" << m;
        }
        
        else if(start.hours > finish.hours && finish.minutes > start.minutes){
            m = start.minutes - finish.minutes;
            m = 60 + m;
            
            h = start.hours - finish.hours - 1;
            
            cout << h << ":" << m;
        }
        
        // finish.hours > start.hours && start.minutes > finish.minutes
        else{
            m = finish.minutes - start.minutes;
            m = 60 + m;
            
            h = finish.hours - start.hours - 1;
            
            cout << h << ":" << m;
        }
        
    }
    else{
        cout << "Error: wrong time entered";
    }
    
    

    return 0;
}
