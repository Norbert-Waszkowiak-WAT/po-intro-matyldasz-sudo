#include <iostream>
using namespace std;
class Point {
public:
    int x,y;
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;
    p1.print(); 
    
    Point p2;
    p2.x = 5;
    p2.y = 15;
    p2.print();  

    Point p3;
    p3.x = 7;
    p3.y = 6;
    p3.print(); 
    return 0;
}