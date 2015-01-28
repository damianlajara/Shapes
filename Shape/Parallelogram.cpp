//
//  Parallelogram.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Parallelogram.h"
using std::cout;
using std::endl;

Parallelogram::Parallelogram() : base(0), side(0), height(0) {
    //cout << "In Parallelogram Constructor" << endl;
}
Parallelogram::Parallelogram(double newBase, double newSide, double newHeight)
    : base(newBase), side(newSide), height(newHeight) {
    //cout << "In Parallelogram custom constructor" << endl;
        calculateArea();
        calculatePerimeter();
}
Parallelogram::~Parallelogram() {
    //cout << "In Parallelogram De-constructor" << endl;
}
int Parallelogram::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Parallelogram::getPerimeter() {
    return perimeter;
}
double Parallelogram::getArea() {
    return area;
}
void Parallelogram::calculateArea() {
    //Area = b × h
    area = base * height;
}
void Parallelogram::calculatePerimeter() {
    //Perimeter = 2(b+s)
    perimeter = 2*(base + side);
}
void Parallelogram::print() {
    //cout << "PRINTING from parallelogram!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~PARALLELOGRAM~*~*~*~*~*~*~*~*" << endl;
    cout << "A Parallelogram is a quadrilateral with opposite sides parallel." << endl;
    cout << "A Parallelogram's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your Parallelogram's left and right sides are both of length " << side << endl;
    cout << "Your Parallelogram's top and bottom sides are both of length " << base << endl;
    cout << "Your Parallelogram's height is " << height << endl;
    cout << "Your Parallelogram's perimeter is " << perimeter << endl;
    cout << "Your Parallelogram's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}