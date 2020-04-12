#include <iostream>
#include "point.hpp"
using namespace std;

int point::count = 0;
point::point(int x, int y):x(x),y(y){
        count ++;
}
point::point(const point &p){
    x = p.x;
    y = p.y;
    count ++;
}
void point::showCount(){
    cout << "The present count is " << count << endl;
}
