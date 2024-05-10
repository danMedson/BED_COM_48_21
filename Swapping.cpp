// Rectangle.h (Header file)
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor (for completeness)

    // Accessor methods
    void setLength(double len);
    void setWidth(double wid);
    double getLength() const;
    double getWidth() const;

    // Calculate and return the area
    double calculateArea() const;
};

#endif 



Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::~Rectangle() {
    // Destructor (no action needed for now)
}

void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double wid) {
    width = wid;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::calculateArea() const {
    return length * width;
}

// main.cpp
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
