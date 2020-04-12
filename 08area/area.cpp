//area.cpp: calulate area for multiple shapes.
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const float pi = 3.14159;
    enum shapeType {CIRCLE=1, RECTANGLE, SQUARE};
    shapeType shape;
    int a = 0;
    cout << "Choose the shape (1 for Circle, 2 for Rectangle, 3 for Square:\n";
    cin >> a;
    shape = shapeType(a);
    switch (shape){
        case CIRCLE : {
            float r = 0.0;
            cout << "Enter the radius of the circle: ";
            cin >> r;
            cout << "The area of the circle is ";
            cout << fixed << setprecision(2) << pi * r * r << endl;
            break;
        }
        case RECTANGLE : {
            float len = 0.0, wid = 0.0;
            cout << "Enter the length of the rectangle: ";
            cin >> len;
            cout << "Enter the width of the rectangle: ";
            cin >> wid;
            cout << "The area of the ractangle is ";
            cout << fixed << setprecision(2) << len * wid << endl;
            break;
        }
        case SQUARE : {
            float len = 0.0;
            cout << "Enter the length of the square: ";
            cin >> len;
            cout << "The area of the square is ";
            cout << fixed << setprecision(2) << len * len << endl;
            break;
        }
        default : cout << "Not yet!" << endl; break;
        return 0;
    }
}