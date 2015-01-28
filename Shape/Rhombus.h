//
//  Rhombus.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Rhombus__
#define __Shape__Rhombus__

#include "Parallelogram.h"
class Rhombus : public Parallelogram {
private:
    double side;
    double altitude;
    //double perimeter;
    //double area;
    //double angles[4];
    //int totalAngleMeasurement = 360;
public:
    Rhombus();
    Rhombus(double newSide, double newAltitude);
    ~Rhombus();
    virtual int getTotalAngleMeasurement() override;
    virtual double getPerimeter() override;
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Rhombus__) */
