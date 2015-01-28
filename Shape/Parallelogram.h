//
//  Parallelogram.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Parallelogram__
#define __Shape__Parallelogram__

#include "Quadrilateral.h"
class Parallelogram : public Quadrilateral {
protected:
    //These are Inherited
    //double perimeter;
    //double area;
    //int totalAngleMeasurement = 360;
    double angles[4] = {0,0,0,0};
    double base; //only need one, since there is a parallel side of equal length
    double side; //only need one, since there is a parallel side of equal length
    double height;
    
public:
    Parallelogram();
    Parallelogram(double newBase, double newSide, double newHeight);
    ~Parallelogram();
    virtual int getTotalAngleMeasurement() override;
    virtual double getPerimeter() override;
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Parallelogram__) */
