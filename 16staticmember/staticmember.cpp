#include <iostream>
using namespace std;
static int count;

class point {
    public:
    point(int x=0, int y =0):x(x),y(y){
        count ++;
    }
    int getX(){return x;}
    int getY(){return y;}
    point(point &p){
        x = p.x;
        y = p.y;
        count ++;
    }
    ~point(){
        count ++;
    }
    void showCount(){
        cout << "The present count is " << count << endl;
    }
    private:
    int x, y;
};

int main(){
    point p1 (4,5);
    cout << "The point 1 is: (" << p1.getX() <<","<<p1.getY()<<")"<<endl;
    p1.showCount();
    point p2 = p1;
    cout << "The point 2 is: (" << p2.getX() <<","<<p2.getY()<<")"<<endl;
    p2.showCount();
    return 0;
}
