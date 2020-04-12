//reversen.cpp: Revese an integar with do-while.
#include <iostream>
using namespace std;

int main(){
    int n, digit = 0;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The reverse integer is: ";
    do{
        digit = n % 10;
        cout << digit;
        n /= 10;
    }while(n);
    cout << endl;
    return 0;
}