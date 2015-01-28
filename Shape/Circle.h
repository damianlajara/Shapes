//
//  Circle.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Circle__
#define __Shape__Circle__

#include "twoDshape.h"
class Circle : public twoDshape {
private:
    double radius;
    double diameter;
    double circumference;
    double area;
public:
    Circle();
    Circle(double newRadius);
    ~Circle();
    void calculateCircumference();
    double getCircumference();
    //Virtual function
    virtual double getArea() override;
    virtual void calculateArea() override;
    virtual void print() override;
};
#endif /* defined(__Shape__Circle__) */
