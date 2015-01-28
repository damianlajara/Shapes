//
//  Trapezoid.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Trapezoid__
#define __Shape__Trapezoid__

#include "Quadrilateral.h"
class Trapezoid : public Quadrilateral {
private:
    double leg[2];
    double base[2];
    double height;
    //double area;
    //double perimeter;
    double median;
    //int totalAngleMeasurement = 360;
public:
    Trapezoid();
    Trapezoid(double base1, double base2, double leg1, double leg2, double newHeight);
    ~Trapezoid();
    void calculateMedian();
    void calculateHeight();
    virtual int getTotalAngleMeasurement() override;
    virtual double getPerimeter() override;
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Trapezoid__) */

/*TODOO: CALCULATE THE ANGLES FOR ALL OF THEM OR TAKE THEM OFF*/