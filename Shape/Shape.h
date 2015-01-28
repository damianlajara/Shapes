//
//  Shape.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Shape__
#define __Shape__Shape__

#include <iostream> 
#include <math.h>
//abstract class
class Shape {
public:
    Shape();
    ~Shape();
    virtual void print() =0;
};

#endif /* defined(__Shape__Shape__) */
