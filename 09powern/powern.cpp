//powern.cpp: Using fuctions to calculate n-th power of a number;
#include <iostream>
#include <iomanip>
using namespace std;

double powerN( float x, int n){
    x = n == 0 ? 1 : x * powerN (x, n-1);
    return x;
}

int main(){
    float x = 0;
    int n = 0;
    cout << "Pease enter an number: ";
    cin >> x;
    cout << "Please enter an integar as the power: ";
    cin >> n;
    cout << "Result is: " /*<< fixed << setprecision(2) */<< powerN( x, n ) << endl;
    return 0;
}