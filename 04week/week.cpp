//week.cpp: Using switch.
#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    cout << "Input an integar from 0 ~ 6:" << endl;
    cin >> day;
    switch (day)
    {
        case 0 : cout << "Sunday\n"; break;
        case 1 : cout << "Monday\n"; break;
        case 2 : cout << "Tuesday\n"; break;    
        case 3 : cout << "Wednesday\n"; break; 
        case 4 : cout << "Thursday\n"; break; 
        case 5 : cout << "Friday\n"; break; 
        case 6 : cout << "Saturday\n"; break;
        default : cout << "Out of range!\n"; break; 
    }
    return 0;
}
