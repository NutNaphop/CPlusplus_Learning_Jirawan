#include <iostream>
#include <string>
using namespace std ; 
class Shape{
    private : 
        string color ; 
    public : 
        double getArea(){
            cout << "Menu ==> " , cin >> color ;
            return stoi(color) ;
        };
        string toString(){
            cout << "You Choose Menu Number : " << color << endl ;
            return color;
        };
};
class Rectangle : public Shape {
    private : 
        int length ; 
        int width ; 
    public : 
        double getArea(){
            cout << "Rectangle" << endl;
            cout << "Input Your Area => ", cin >> length; 
            cout << "Input Your Width => ", cin >> width; 
            return length * width ; 
        }
        string toString(){
             cout << getArea() << endl ;  
        }
};
class Triangle : public Shape {
    private : 
        int base ; 
        int height ; 
    public : 
        double getArea(){
            cout << "Triangle" << endl;
            cout << "Input Your Base => ", cin >> base; 
            cout << "Input Your Height => ", cin >> height;
            return 0.5 * base * height ; 
        }
        char toString(){
            cout << getArea() << endl ; 
        }
};

int main () {
    string choose ;
    Rectangle r1 = Rectangle();
    Triangle t1 = Triangle();
    Shape sh = Shape();
    sh.getArea();
    
    choose = sh.toString();
    if (choose == "1"){r1.toString();}
    else {t1.toString();}
}