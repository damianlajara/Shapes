//
//  Square.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Square__
#define __Shape__Square__

#include "Rectangle.h"
class Square : public Rectangle {
private:
    double side;
    //double perimeter;
    //double area;
    //int angles[4] = {90,90,90,90};
    //int totalAngleMeasurement = 360;
public:
    Square();
    Square(double newSide);
    ~Square();
    virtual int getTotalAngleMeasurement() override;
    virtual double getPerimeter() override;
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Square__) */
