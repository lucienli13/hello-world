//innout.cpp: learing the usage of cin and cout
#include <iostream>
using namespace std;

int main()
{
    int x, a, b = 0;
    cout << "Input the fisrt integar:";
    cin >> a;
    cout << "Input the second integar:";
    cin >> b;
    x = a > b ? a : b;
    cout << "The larger one is " << x <<endl;
    return 0;
}