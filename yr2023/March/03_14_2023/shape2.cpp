#include <iostream>
using namespace std ; 
class Shape{
    private : 
        char color[30] ; 
    public : 
        double getArea(); 
        char toString();
};
class Rectangle : public Shape {
    private : 
        int length ; 
        int width ; 
    public : 
        double getArea(){
            cout << "Input Your Area => ", cin >> length; 
            cout << "Input Your Width => ", cin >> width; 
            return length * width ; 
        }
        char toString(){
             cout << getArea() << endl ;  
        }
};
class Triangle : public Shape {
    private : 
        int base ; 
        int height ; 
    public : 
        double getArea(){
            cout << "Input Your Base => ", cin >> base; 
            cout << "Input Your Height => ", cin >> height;
            return 0.5 * base * height ; 
        }
        char toString(){
            cout << getArea() << endl ; 
        }
};

int main () {
    Rectangle r1 = Rectangle();
    Triangle t1 = Triangle();
    r1.toString() ; 
    t1.toString() ; 
}