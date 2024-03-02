#include <iostream>
using namespace std;

class Shape {
private:
    double height;
    double width;
public:
    Shape(double h, double w) {
        height = h;
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }
    void setWidth(double w) {
        width = w;
    }
    double getHeight() {
        return height;
    }
    double getWidth() {
        return width;
    }
};

class Rectangle : public Shape {
private:
public:
    Rectangle() :Shape() { height = 0; width = 0; }
    Rectangle(double h, double w) :Shape(h, w) {}
    double getArea() {
        return getHeight() * getWidth();
    }
};

class Triangle : public Shape {
private:
public:
    Triangle() :Shape(0.0, 0.0) {}
    Triangle(double h, double w) :Shape(h, w) {}
    double getArea() {
        return getHeight() * getWidth() / 2;
    }
};

int main() {
    Rectangle r(5, 2);
    Triangle t(3, 5);

    cout << "Rectangle(5,2)의 면적 : " << r.getArea() << endl;
    cout << " Triangle(3,5)의 면적 : " << t.getArea() << endl;

    return 0;
}
