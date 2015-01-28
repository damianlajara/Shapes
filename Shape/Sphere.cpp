//
//  Sphere.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Sphere.h"
using std::cout;
using std::endl;

Sphere::Sphere() : radius(0) {
    //cout << "In sphere Constructor" << endl;
}
Sphere::Sphere(double newRadius) : radius(newRadius) {
    //cout << "In sphere custom constructor" << endl;
    calculateSurfaceArea();
    calculateVolume();
}
Sphere::~Sphere() {
    //cout << "In sphere De-constructor" << endl;
}
void Sphere::calculateVolume() {
    //Volume = (4/3) × π × r^3
    volume = (4/3) * 3.14159 * pow(radius,3);
}
void Sphere::calculateSurfaceArea() {
    //Surface Area = 4 × π × r^2
    surfaceArea = 4 * 3.14159 * pow(radius,2);
}
double Sphere::getVolume() {
    return volume;
}
double Sphere::getSurfaceArea() {
    return surfaceArea;
}
int Sphere::getVertices() {
    return vertices;
}
int Sphere::getEdges() {
    return edges;
}
int Sphere::getFaces() {
    return faces;
}
void Sphere::print() {
    //cout << "PRINTING! from sphere" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~SPHERE~*~*~*~*~*~*~*~*" << endl;
    cout << "A Sphere is a perfectly symmetrical round 3D solid figure,\n";
    cout << "with every point on its surface equidistant from its center." << endl;
    cout << "Your Sphere has " << faces << " faces" << endl;
    cout << "Your Sphere has " << edges << " edges" << endl;
    cout << "Your Sphere has " << vertices << " vertices" << endl;
    cout << "Your Sphere has a radius of " << radius << endl;
    cout << "Your Sphere's surface area is " << surfaceArea << endl;
    cout << "Your Sphere's volume is " << volume << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}