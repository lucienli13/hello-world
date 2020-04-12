//factors.cpp: Using for to determine the factors of an integar.
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter an positive integar: ";
    cin >> n;
    cout << "Factors of " << n << " are:" << endl;
    for(int k = 1; k <= n; k++ )
    {
        if(n % k ==0)
        cout << k << ' ';
    }
    cout << endl;
    return 0;
}