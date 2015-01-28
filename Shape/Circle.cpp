//
//  Circle.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Circle.h"
using std::cout;
using std::endl;

Circle::Circle() : radius(0), diameter(0), circumference(0), area(0) {
    //cout << "In Circle Constructor" << endl;
}
Circle::Circle(double newRadius) : radius(newRadius), diameter(newRadius*2) {
    //cout << "In Circle custom constructor" << endl;
    calculateCircumference();
    calculateArea();
}
Circle::~Circle() {
    //cout << "In Circle De-constructor" << endl;
}
void Circle::calculateCircumference() {
    //Circumference = 2 × π × Radius
    circumference = 2 * 3.14159 * radius;
}
double Circle::getCircumference() {
    return circumference;
}
double Circle::getArea() {
    return area;
}
void Circle::calculateArea() {
    //Area = π × r^2
    area = 3.14159 * pow(radius, 2);
}
void Circle::print() {
    //cout << "PRINTING from circle!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~CIRCLE~*~*~*~*~*~*~*~*" << endl;
    cout << "A Circle is a 2D plane shape where the set of\n";
    cout << "all pointsare a fixed distance from a center." << endl;
    cout << "Your Circle's radius is " << radius << endl;
    cout << "Your Circle's diameter is " << diameter << endl;
    cout << "Your Circle's circumference is " << circumference << endl;
    cout << "Your Circle's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
    
}