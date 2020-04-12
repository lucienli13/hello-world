//bintodec.cpp: Trasform binary number to decimal number.
#include <iostream>
using namespace std;

double powerN( float x, int n){
    x = n == 0 ? 1 : x * powerN (x, n-1);
    return x;
}

int main(){
    char ch;
    int sum = 0;
    cout << "Please enter an 8 bit binary integar: ";
    for( int i = 8; i; i-- ){
        cin >> ch;
        sum += (ch == '1') ? static_cast<int> (powerN(2, i-1)) : 0; 
    }
    cout << "The decimal integar is: " << sum << endl;
    return 0;
}