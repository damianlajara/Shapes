//
//  Rectangle.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Rectangle__
#define __Shape__Rectangle__

#include "Parallelogram.h"
class Rectangle : public Parallelogram {
private:
    double width;
    double height;
    //double perimeter;
    //double area;
    //double angles[4];
    //int totalAngleMeasurement = 360;
public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();
    virtual int getTotalAngleMeasurement() override;
    virtual double getPerimeter() override;
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Rectangle__) */
