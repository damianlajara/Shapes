//
//  Square.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Square.h"
using std::cout;
using std::endl;

//http://stackoverflow.com/questions/2290733/initialize-parents-protected-members-with-initialization-list-c
//Cannot use Initializer list on parent members!
//ex: protected members from parent class, that this class inherits is NOT
//a member of this class, therefore it will not compile
//Square::Square() :side(0),diagonal(0), perimeter(0), area(0) {
//    cout << "In Square Constructor" << endl;
//}
Square::Square() : side(0) {
    //cout << "In Square Constructor" << endl;
    perimeter = 0;
    area = 0;
}
Square::Square(double newSide) : side(newSide) { //ok, since side was created in this class
    //cout << "In Square custom constructor" << endl;
    calculatePerimeter();
    calculateArea();
}
Square::~Square() {
    //cout << "In Square De-constructor" << endl;
}
int Square::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Square::getPerimeter() {
    return perimeter;
}
double Square::getArea() {
    return area;
}
void Square::calculateArea() {
    //Area = a2 = a × a
    area = pow(side, 2);
}
void Square::calculatePerimeter() {
    //Perimeter = 4a
    perimeter = 4 * side;
}
void Square::print() {
    //cout << "PRINTING from square!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~SQUARE~*~*~*~*~*~*~*~*" << endl;
    cout << "A square is a quadrilateral with four right angles and all four sides of equal length." << endl;
    cout << "A square's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your square's sides are all of length " << side << endl;
    cout << "Your square's perimeter is " << perimeter << endl;
    cout << "Your square's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}