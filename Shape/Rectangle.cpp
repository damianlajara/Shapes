//
//  Rectangle.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Rectangle.h"
using std::cout;
using std::endl;

Rectangle::Rectangle() : width(0), height(0) {
    //cout << "In Rectangle Constructor" << endl;
    perimeter = 0;
    area = 0;
    //angles[4] = {0,0,0,0} Angles should be 0 already, since thats how they were inherited from parallelogram
}
Rectangle::Rectangle(double w, double h) :width(w), height(h) {
    //cout << "In Rectangle custom constructor" << endl;
    calculateArea();
    calculatePerimeter();
}
Rectangle::~Rectangle() {
    //cout << "In Rectangle De-constructor" << endl;
}
int Rectangle::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Rectangle::getPerimeter() {
    return perimeter;
}
double Rectangle::getArea() {
    return area;
}
void Rectangle::calculateArea() {
    //Area = w × h
    area = width * height;
}
void Rectangle::calculatePerimeter() {
    //Perimeter = 2(w+h)
    perimeter = 2*(width + height);
}
void Rectangle::print() {
    //cout << "PRINTING from Rectangle!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~RECTANGLE~*~*~*~*~*~*~*~*" << endl;
    cout << "A Rectangle is a quadrilateral with adjacent sides that\n";
    cout << "are perpendicular and all four angles are right angles." << endl;
    cout << "A Rectangle's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your Rectangle's left and right sides are of length " << width << " and the top and bottom are of length " << height << endl;
    cout << "Your Rectangle's perimeter is " << perimeter << endl;
    cout << "Your Rectangle's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}