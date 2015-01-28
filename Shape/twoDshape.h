//
//  twoDshape.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__twoDshape__
#define __Shape__twoDshape__

#include "Shape.h"
class twoDshape : public Shape {
protected:
    double area;
public:
    twoDshape();
    ~twoDshape();
    virtual void calculateArea()=0;
    virtual double getArea()=0;
    virtual void print() override;
};
#endif /* defined(__Shape__twoDshape__) */
