//issymm.cpp: Find all in (11 999) that is symm.
#include <iostream>
using namespace std;

bool isSymm( int n ){
    int rn = 0;
    int m = n;
    while(m){
        rn = rn * 10 + (m % 10);
        m /= 10;
    }
    return (rn == n);
}

int main(){
    int i = 11;
    cout << "These are symms: " << endl;
    for ( ; i <= 999; i++){
        if(isSymm(i)&isSymm(i*i)&isSymm(i*i*i))
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}