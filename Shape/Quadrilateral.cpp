//
//  Quadrilateral.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Quadrilateral.h"
using std::cout;
using std::endl;

Quadrilateral::Quadrilateral(): side{0,0,0,0}, angle{87,76,98,99}, perimeter(0), semiPerimeter(0){
    //cout << "In Quadrilateral Constructor" << endl;
}
    
/* MAKE A FUNCTION IN MAIN WHERE IT ASKS FOR THE FOUR ANGLES< AND IF THEY DNT ADD UP TPO 360, THEN LOOP UNTIL IT DOES, ALLOWING USER TO EXIT WITH A KEY PRESS AS WELL!!! */
    
Quadrilateral::Quadrilateral(double side1, double side2, double side3, double side4)
    : side{side1,side2,side3,side4}, angle{87,76,98,99} {
    //cout << "In Quadrilateral custom constructor" << endl;
        calculatePerimeter();
        calculateSemiPerimeter(); //Must go after perimeter
        calculateArea();
}
Quadrilateral::Quadrilateral(double side1, double side2, double side3, double side4, double angle1, double angle2, double angle3, double angle4)
    : side{side1,side2,side3,side4},angle{angle1,angle2,angle3,angle4} {
    //cout << "In Quadrilateral custom constructor" << endl;
        calculatePerimeter();
        calculateSemiPerimeter(); //Must go after perimeter
        calculateArea();
}
Quadrilateral::~Quadrilateral() {
    //cout << "In Quadrilateral De-constructor" << endl;
}
int Quadrilateral::getTotalAngleMeasurement() {
    return totalAngleMeasurement;
}
double Quadrilateral::getPerimeter() {
    return perimeter;
}
void Quadrilateral::calculateSemiPerimeter() {
    semiPerimeter = perimeter/2;
}
void Quadrilateral::calculateArea() {
    //Bretschneider's Formula
    //area = 1/4(sqrt(4 * p^2 * q^2 -(b^2 + d^2 - a^2 - c^2) ^2))
    // = 1/4(sqrt(4 * pow(p,2) * pow(q,2) - (pow((pow(side[1],2) + pow(side[3],2) - pow(side[0],2) - pow(side[2],2)),2))));
    //OR without diagonals: area = sqrt((s-a)(s-b)(s-c)(s-d)-abcd*(cos(A+C/2)^2))
    area = sqrt((semiPerimeter - side[0])*(semiPerimeter - side[1])*(semiPerimeter - side[2])*(semiPerimeter - side[3]) - side[0]*side[1]*side[2]*side[3]*pow(cos(angle[0]+angle[2]/2),2));
}
void Quadrilateral::calculatePerimeter() {
    perimeter = side[0] + side[1] + side[2] + side[3];
}
double Quadrilateral::getArea() {
    return area;
}
void Quadrilateral::print() {
    //cout << "PRINTING from Quadrilateral!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~QUADRILATERAL~*~*~*~*~*~*~*~*" << endl;
    cout << "A Quadrilateral is a polygon with 4 angles and 4 sides." << endl;
    cout << "A Quadrilateral's internal angles add up to " << totalAngleMeasurement << " degrees" << endl;
    cout << "Your Quadrilateral's lengths are: " << side[0] << "(bottom), " << side[1] << "(left), " << side[2] << "(top), and " << side[3] << "(right)" << endl;
    cout << "Your Quadrilateral's perimeter is " << perimeter << endl;
    cout << "Your Quadrilateral's area is " << area << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}