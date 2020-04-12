#include <iostream>
#include "point.hpp"
using namespace std;

int main(){
    point p1 (4,5);
    cout << "The point 1 is: (" << p1.getX() <<","<<p1.getY()<<")\n";
    p1.showCount();
    point p2 = p1;
    cout << "The point 2 is: (" << p2.getX() <<","<<p2.getY()<<")\n";
    p2.showCount();
    return 0;
}
