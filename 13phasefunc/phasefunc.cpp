//phasefunc.cpp
#include <iostream>
#include <cmath>
using namespace std;

const double tol = 10e-10;

double tsin(double x){
    double t = x;
    double val = 0;
    int n = 1;
    do{
        val += t;
        n += 2;
        t *= (-x*x/(n*(n-1)));
    }while(fabs(t)>=tol);
    return val;
}

int main(){
    double r = 0, s = 0, k = 0;
    cout << "Please enter r and s: " << endl;
    cin >> r >> s;
    if(r*r <= s*s) k = sqrt( tsin(r) * tsin(r)+ tsin(s) * tsin(s) );
    else k = 0.5 * tsin(r*s);
    cout << k << endl;
    return 0;
}