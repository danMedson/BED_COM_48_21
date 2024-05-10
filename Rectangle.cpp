//#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0.0), width(0.0) {}
    ~Rectangle() {}

    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }
};

#include <iostream>

int main() {
    Rectangle myRectangle;

    double len, wid;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> len;
    myRectangle.setLength(len);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> wid;
    myRectangle.setWidth(wid);

    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;
    return 0;
}
