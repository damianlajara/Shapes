//
//  main.cpp
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#include <iostream>
#include "Shape.h"
#include "threeDshape.h"
#include "Sphere.h"
#include "Cube.h"
#include "Cylinder.h"
#include "twoDshape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Trapezoid.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Square.h"
#include <cmath>

using namespace std;

bool greaterThanZero(double num) {
    return num >= 0 ? true : false;
}
bool isValid(double num) {
    if (!greaterThanZero(num)) {
        cout << "Error! Invalid input! Input must be greater than 0!" << endl;
        return false;
    }
        return true;
}
void create3D(Shape* shape) {
    int choice3D;
    cout << "Which 3D Shape would you like to create?" << endl;
    cout << "1) Sphere\n2) Cube\n3) Cylinder" << endl;
    cin >> choice3D;
    switch(choice3D) {
        case 1: {    //sphere
            double radius;
            cout << "Enter the radius for your sphere: " << endl;
            cin >> radius;
            if(!isValid(radius)) break;
            Sphere sphere(radius);
            shape = &sphere;
            shape->print();
        } break;
        case 2:  {   //cube
            double side;
            cout << "Enter the length that each side of your cube will have" << endl;
            cout << "Length of Sides: ";
            cin >> side;
            if(!isValid(side)) break;
            Cube cube(side);
            shape = &cube;
            shape->print();
        } break;
        case 3: {    //cylinder
            double radius, height;
            cout << "Enter the radius, and height of your cylinder" << endl;
            cout << "Radius: ";
            cin >> radius;
            if(!isValid(radius)) break;
            cout << "Height: ";
            cin >> height;
            if(!isValid(height)) break;
            Cylinder cylinder(radius, height);
            shape = &cylinder;
            shape->print();
        } break;
    default: //error
            cout << "Error! That is not a valid choice!" << endl;
        break;
    }
}

void create2D(Shape* shape) {
    int choice2D;
    cout << "Which 2D Shape would you like to create?" << endl;
    cout << "1) Circle\n2) General Quadrilateral\n3) Trapezoid\n4) Parallelogram\n5) Rhombus\n6) Rectangle\n7) Square" << endl;
    cin >> choice2D;
    switch(choice2D) {
        case 1:{    //circle
            double radius;
            cout << "Enter the radius for your circle: " << endl;
            cin >> radius;
            if(!isValid(radius)) break;
            Circle circle(radius);
            shape = &circle;
            shape->print();
        } break;
        case 2: {   //quadrilateral
            int quadChoice;
            double side1,side2,side3,side4;
            double angle1,angle2,angle3,angle4;
            cout << "Enter the four sides for your Quadrilateral: " << endl;
            cout << "Side1: ";
            cin >> side1;
            if(!isValid(side1)) break;
            cout << "Side2: ";
            cin >> side2;
            if(!isValid(side2)) break;
            cout << "Side3: ";
            cin >> side3;
            if(!isValid(side3)) break;
            cout << "Side4: ";
            cin >> side4;
            if(!isValid(side4)) break;
            cout << "Do you want to enter the four angles of your Quadrilateral as well? ";
            cout << "Enter 1) for yes and 2) for no: " << endl;
            cin >> quadChoice;
            if(quadChoice == 1) {
                cout << "Enter the four angles for your Quadrilateral: " << endl;
                cout << "Angle1: ";
                cin >> angle1;
                if(!isValid(angle1)) break;
                cout << "Angle2: ";
                cin >> angle2;
                if(!isValid(angle2)) break;
                cout << "Angle3: ";
                cin >> angle3;
                if(!isValid(angle3)) break;
                cout << "Angle4: ";
                cin >> angle4;
                if(!isValid(angle4)) break;
                Quadrilateral quadrilateral(side1,side2,side3,side4,angle1,angle2,angle3,angle4);
                shape = &quadrilateral;
                shape->print();
            } else if(quadChoice == 2) {
                cout << "Your quadrilateral has been constructed with the default angle values of: 87, 76, 98, and 99 " << endl;
                Quadrilateral quadrilateral(side1,side2,side3,side4);
                shape = &quadrilateral;
                shape->print();
            } else {
                cout << "Error! Invalid input!" << endl;
                break;
            }
        } break;
        case 3: {   //Trapezoid
            double base1, base2, leg1, leg2, height;
            cout << "Enter the bottom and top lengths of your trapezoid as well as the height\n";
            cout << "Bottom: ";
            cin >> base1;
            if(!isValid(base1)) break;
            cout << "Top: ";
            cin >> base2;
            if(!isValid(base2)) break;
            cout << "\nEnter the left and right lengths of your trapezoid\n";
            cout << "Left: ";
            cin >> leg1;
            if(!isValid(leg1)) break;
            cout << "Right: ";
            cin >> leg2;
            if(!isValid(leg2)) break;
            cout << "\nEnter the height of your trapezoid\n";
            cout << "Height: ";
            cin >> height;
            if(!isValid(height)) break;
            Trapezoid trapezoid(base1, base2, leg1, leg2, height);
            shape = &trapezoid;
            shape->print();
        } break;
        case 4: {   //Parallelogram
            double base,side,height;
            cout << "Enter the base length, side length, and height of your parallelogram" << endl;
            cout << "Base: ";
            cin >> base;
            if(!isValid(base)) break;
            cout << "Side: ";
            cin >> side;
            if(!isValid(side)) break;
            cout << "Height: ";
            cin >> height;
            if(!isValid(height)) break;
            Parallelogram parallelogram(base,side,height);
            shape = &parallelogram;
            shape->print();
        } break;
        case 5: {   //Rhombus
            double side, altitude;
            cout << "Enter the side length, and altitude of your rhombus" << endl;
            cout << "Side: ";
            cin >> side;
            if(!isValid(side)) break;
            cout << "Altitude: ";
            cin >> altitude;
            if(!isValid(altitude)) break;
            Rhombus rhombus(side, altitude);
            shape = &rhombus;
            shape->print();
        } break;
        case 6: {   //Rectangle
            double width, height;
            cout << "Enter the width, and height of your rectangle" << endl;
            cout << "Width: ";
            cin >> width;
            if(!isValid(width)) break;
            cout << "Height: ";
            cin >> height;
            if(!isValid(height)) break;
            Rectangle rectangle(width, height);
            shape = &rectangle;
            shape->print();
        } break;
        case 7: {   //Square
            double side;
            cout << "Enter the length that each side of your square will have" << endl;
            cout << "Side: ";
            cin >> side;
            if(!isValid(side)) break;
            Square square(side);
            shape = &square;
            shape->print();
        } break;
        default: //error
            cout << "Error! That is not a valid choice!" << endl;
            break;
    }
}

void shapes() {
    Shape *shape;
    int choice;
    cout << "Welcome to Shapes!" << endl;
    do {
        cout << "Enter:\n1) for 2D\n2) for 3D\n0) to quit!" << endl;
        cin >> choice;
        if(choice == 1)
            create2D(shape);
        else if(choice == 2)
            create3D(shape);
        else if(choice == 0) {
            cout << "Hope you enjoyed learning about geometric shapes!" << endl;
            break;
        }
        else {
            cout << "Error! Invalid answer. Try again!" << endl;
        }
    } while(choice != 0);
    
}

int main(int argc, const char * argv[]) {
    shapes();
    cout << "Thanks for using SHAPES" << endl;
    return 0;
}

