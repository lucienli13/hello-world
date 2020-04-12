//sum.cpp: Using do-while to calculate the sum of 1~10.
#include <iostream>
using namespace std;

int main(){
    int sum = 0, i = 0;
    do{
        sum += i++;
    }while(i <= 10);
    cout << "The sum is " << sum << endl;
    return 0;
}