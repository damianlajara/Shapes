//
//  Cylinder.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Cylinder.h"
using std::cout;
using std::endl;

Cylinder::Cylinder() : height(0), radius(0) {
    //cout << "In Cylinder Constructor" << endl;
}
Cylinder::Cylinder(double newRadius, double newHeight) :radius(newRadius), height(newHeight) {
    //cout << "In Cylinder custom constructor" << endl;
    calculateSurfaceArea();
    calculateVolume();
}
Cylinder::~Cylinder() {
    //cout << "In Cylinder De-constructor" << endl;
}
void Cylinder::calculateVolume() {
    //Volume = π × r^2 × h
    volume = 3.14159 * pow(radius,2) * height;
}
void Cylinder::calculateSurfaceArea() {
    //Surface Area = 2 × π × r × (r+h)
    surfaceArea = 2 * 3.14159 * radius * (radius + height);
}
double Cylinder::getVolume() {
    return volume;
}
double Cylinder::getSurfaceArea() {
    return surfaceArea;
}
int Cylinder::getVertices() {
    return vertices;
}
int Cylinder::getEdges() {
    return edges;
}
int Cylinder::getFaces() {
    return faces;
}
void Cylinder::print() {
    //cout << "PRINTING from cylinder!" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~CYLINDER~*~*~*~*~*~*~*~*" << endl;
    cout << "A Cylinder is a solid 3D geometric figure with\n";
    cout << "straight parallel sides and a circular or oval section." << endl;
    cout << "Your Cylinder has " << faces << " faces" << endl;
    cout << "Your Cylinder has " << edges << " edges" << endl;
    cout << "Your Cylinder has " << vertices << " vertices" << endl;
    cout << "Your Cylinder has " << base << " flat bases" << endl;
    cout << "Your Cylinder's radius is " << radius << endl;
    cout << "Your Cylinder's height is " << height << endl;
    cout << "Your Cylinder's surface area is " << surfaceArea << endl;
    cout << "Your Cylinder's volume is " << volume << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}