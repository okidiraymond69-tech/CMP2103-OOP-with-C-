#include <iostream>

using namespace std;

class Rectangle {

private:
    double width;
    double length;


public:
    void setWidth(double w){
        width=w;
    }

    void setLength(double l){
        length=l;
    }

    double getWidth(){
        return width;
    }

    double getLength(){
        return length;
    }

    double calculateArea(){
        return width*length;
    }

    double calculatePerimeter(){
        return 2 * (width + length);
    }

};


int main() {
    
    Rectangle rect1;
    rect1.setWidth(3);
    rect1.setLength(7);
    cout << "Rectangle 1: " << endl;
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Length: " << rect1.getLength() << endl;
    cout << "Area: " << rect1.calculateArea() << endl;
    cout << "Perimeter: " << rect1.calculatePerimeter() << endl;

    Rectangle rect2;
    rect2.setWidth(3.4);
    rect2.setLength(7.9);
    cout << "\nRectangle 2: " << endl;
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Length: " << rect2.getLength() << endl;
    cout << "Area: " << rect2.calculateArea() << endl;
    cout << "Perimeter: " << rect2.calculatePerimeter() << endl;

    return 0;
}