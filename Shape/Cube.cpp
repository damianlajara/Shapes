//
//  Cube.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include "Cube.h"
using std::cout;
using std::endl;

Cube::Cube() : edgeLength(0) {
    //cout << "In Cube Constructor" << endl;
}
Cube::Cube(double newEdgeLength) : edgeLength(newEdgeLength) {
    //cout << "In Cube custom constructor" << endl;
    calculateSurfaceArea();
    calculateVolume();
}
Cube::~Cube() {
    //cout << "In Cube De-constructor" << endl;
}
void Cube::calculateVolume() {
    //Volume = (Edge Length)^3
    volume = pow(edgeLength,3);
}
void Cube::calculateSurfaceArea() {
    //Surface Area = 6 × (Edge Length)^2
    surfaceArea = 6 * pow(edgeLength,2);
}
double Cube::getVolume() {
    return volume;
}
double Cube::getSurfaceArea() {
    return surfaceArea;
}
int Cube::getVertices() {
    return vertices;
}
int Cube::getEdges() {
    return edges;
}
int Cube::getFaces() {
    return faces;
}
void Cube::print() {
    //cout << "PRINTING! from cube" << endl;
    cout << "\n*~*~*~*~*~*~*~*~*~CUBE~*~*~*~*~*~*~*~*" << endl;
    cout << "A Cube is a symmetrical 3D shape, either solid or hollow,\n";
    cout << "contained by six equal squares." << endl;
    cout << "Your Cube has " << faces << " faces" << endl;
    cout << "Your Cube has " << edges << " edges" << endl;
    cout << "Your Cube has " << vertices << " vertices" << endl;
    cout << "Your Cube has an edge length of " << edgeLength << endl;
    cout << "Your Cube's surface area is " << surfaceArea << endl;
    cout << "Your Cube's volume is " << volume << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl;
}