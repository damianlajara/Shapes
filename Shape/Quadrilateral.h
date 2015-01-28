//
//  Quadrilateral.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Quadrilateral__
#define __Shape__Quadrilateral__

#include "twoDshape.h"
class Quadrilateral : public twoDshape {
protected:
    int totalAngleMeasurement = 360;
    double perimeter;
    double semiPerimeter;
    double side[4];
    double angle[4];//4 angles must add up to 360
    //double area; AREA GETS INHERITED!
public:
    Quadrilateral();
    Quadrilateral(double side1, double side2, double side3, double side4);
    Quadrilateral(double side1, double side2, double side3, double side4, double angle1, double angle2, double angle3, double angle4);
    ~Quadrilateral();
    
    void calculateSemiPerimeter();
    virtual int getTotalAngleMeasurement();
    virtual double getPerimeter();
    virtual void calculateArea();
    virtual void calculatePerimeter();
    virtual double getArea() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Quadrilateral__) */
