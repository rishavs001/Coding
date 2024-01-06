#include <iostream>
#include <string>
using namespace std;
 #include <iostream>
#include <cmath>
using namespace std;
 
class Point {
protected:
    double xco;
    double yco;
public:
    Point(double xco, double yco) {
        this->xco = xco;
        this->yco = yco;
        cout << "Point constructor called" << endl;
    }
    ~Point() {
        cout << "Point destructor called" << endl;
    }
    void print() {
        cout << "(" << xco << ", " << yco << ")" << endl;
    }
};
 
class Circle : public Point {

public:
   double radius;
    Circle(double xco, double yco, double radius) : Point(xco, yco) {
        this->radius = radius;
        cout << "Circle constructor called" << endl;
    }
    ~Circle() {
        cout << "Circle destructor called" << endl;
    }
    void print() {
        cout << "Center: ";
        Point::print();
        cout << "Radius: " << radius << endl;
    }
    double area() {
        return M_PI * radius * radius;
    }
};
 
class Cylinder : public Circle {
private:
    double height;
public:
    Cylinder(double xco, double yco, double radius, double height) : Circle(xco, yco, radius) {
        this->height = height;
        cout << "Cylinder constructor called" << endl;
    }
    ~Cylinder() {
        cout << "Cylinder destructor called" << endl;
    }
    void print() {
        cout << "Base: ";
        Circle::print();
        cout << "Height: " << height << endl;
    }
    double surfaceArea() {
        return 2 * Circle::area() + 2 * M_PI * radius * height;
    }
    double volume() {
        return Circle::area() * height;
    }
};
 
int main() {
    double xco, yco, radius, height;
    cout << "Enter the x-coordinate of the center of the circle: ";
    cin >> xco;
    cout << "Enter the y-coordinate of the center of the circle: ";
    cin >> yco;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
 
    Cylinder cyl(xco, yco, radius, height);
 
    cout << "Cylinder data:" << endl;
    cyl.print();
    cout << "Surface area: " << cyl.surfaceArea() << endl;
    cout << "Volume: " << cyl.volume() << endl;
 
    return 0;
}