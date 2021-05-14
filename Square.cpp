#include <iostream>
#include <square.h>

Square::Square() {
    setLength(1);
}

Square::Square() {
    setWidth(1);
}

Square::Square(double dblpLength); {
    setLength(dblpLength);
}

void Square::setLength(double dblpLength) {
    if (dblpLength < 0.0) {
        dblpLength = 1.0;
        std::cerr << "Invalid Length set to default of 1. " << std::endl;
}

void Square::setWidth(double dblpLWidth) {
    if (dblpWidth < 0.0) {
        dblpWidth = 1.0;
        std::cerr << "Invalid Width set to default of 1. " << std::endl; 
}

 double  Square::getLength(); {
        return dblLength;
    }

double Square::getWidth(); {
        return dblWidth;
    }

double Square::getPerimeter(); {
    return 2.0 * getLength() + 2.0 * getWidth();
}

double getArea(); {
    return getLength() * getWidth();
    }

void Square::print() {
    std::cout << "This square object has  length of: " << getLength()
        << " a width of: " << getWidth()
        << " a perimeter of: " << getPerimeter();
        << "and a area of: " << getArea() << std::endl:
}
