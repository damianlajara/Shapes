//
//  Trapezoid.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Trapezoid.h"
using std::cout;
using std::endl;

Trapezoid::Trapezoid()
    :leg{0,0}, base{0,0}, height(0), median(0)
{
    //cout << "In Trapezoid Constructor" << endl;
    area = 0;
    perimeter = 0; //Cannot use member initializer list for parent variables
}

Trapezoid::Trapezoid(double base1, double base2, double leg1, double leg2, double newHeight)
    :base{base1, base2}, leg{leg1, leg2}, height(newHeight)//array initializer
{
    //cout << "In Trapezoid custom constructor" << endl;
    //base[0] = base1;
    //base[1] = base2;
    //leg[0] = leg1;
    //leg[1] = leg2;
    calculateMedian();
    //calculateHeight();
    calculateArea();
    calculatePerimeter();
}
Trapezoid::~Trapezoid() {
    //cout << "In Trapezoid De-constructor" << endl;
}
int Trapezoid::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Trapezoid::getPerimeter() {
    return perimeter;
}
double Trapezoid::getArea() {
    return area;
}
void Trapezoid::calculateMedian() {
    //median = (a+b)/2
    median = (base[0] + base[1])/2;
}
void Trapezoid::calculateArea() {
    //Area = median × h
    area = median * height;
}
void Trapezoid::calculateHeight() {
    //[(2*area)/(b1+b2)] = h
    height = ((2 * area)/(base[0]+base[1]));
}
void Trapezoid::calculatePerimeter() {
    //Perimeter = a+b+c+d
    perimeter = base[0] + base[1] + leg[0] + leg[1];
}
void Trapezoid::print() {
    //cout << "PRINTING from trapezoid!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~TRAPEZOID~*~*~*~*~*~*~*~*" << endl;
    cout << "A Trapezoid is a quadrilateral with opposite sides parallel." << endl;
    cout << "A Trapezoid's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your Trapezoid's lengths are: " << leg[0] << "(left), " << leg[1] << "(right), " << base[0] << "(top), and " << base[1] << "(bottom)" << endl;
    cout << "Your Trapezoid's sides are: " << base[0] << "(top), and " << base[1] << "(bottom) " << endl;
    cout << "Your Trapezoid's height is " << height << endl;
    cout << "Your Trapezoid's median is " << median << endl;
    cout << "Your Trapezoid's perimeter is " << perimeter << endl;
    cout << "Your Trapezoid's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;   
}




