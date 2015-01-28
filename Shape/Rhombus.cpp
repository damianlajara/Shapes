//
//  Rhombus.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Rhombus.h"
using std::cout;
using std::endl;

Rhombus::Rhombus() : side(0), altitude(0) {
    //cout << "In Rhombus Constructor" << endl;
    perimeter = 0;
    area = 0;
}
Rhombus::Rhombus(double newSide, double newAltitude) : side(newSide), altitude(newAltitude) {
    //cout << "In Rhombus custom constructor" << endl;
    calculateArea();
    calculatePerimeter();
}
Rhombus::~Rhombus() {
    //cout << "In Rhombus De-constructor" << endl;
}
int Rhombus::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Rhombus::getPerimeter() {
    return perimeter;
}
double Rhombus::getArea() {
    return area;
}
void Rhombus::calculateArea() {
    //Area = altitude × s
    area = altitude * side;
}
void Rhombus::calculatePerimeter() {
    //Perimeter = 4s
    perimeter = 4*side;
}
void Rhombus::print() {
    //cout << "PRINTING from rhombus!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~RHOMBUS~*~*~*~*~*~*~*~*" << endl;
    cout << "A Rhombus is a parallelogram with all sides equal." << endl;
    cout << "A Rhombus's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your Rhombus's sides are all of length " << side << endl;
    cout << "Your Rhombus's altitude is " << altitude << endl;
    cout << "Your Rhombus's perimeter is " << perimeter << endl;
    cout << "Your Rhombus's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}