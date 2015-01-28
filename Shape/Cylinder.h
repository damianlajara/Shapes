//
//  Cylinder.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Cylinder__
#define __Shape__Cylinder__

#include "threeDshape.h"
class Cylinder : public threeDshape {
    private:
        double height;
        double radius;
        int faces = 0;
        int edges = 0;
        int vertices = 0;
        int base = 2;
    public:
        Cylinder();
        Cylinder(double newRadius, double newHeight);
        ~Cylinder();
        //virtual functions
        virtual void calculateVolume() override;
        virtual void calculateSurfaceArea() override;
        virtual void print() override;
        virtual double getVolume() override;
        virtual double getSurfaceArea() override;
        virtual int getVertices() override;
        virtual int getEdges() override;
        virtual int getFaces() override;
};
#endif /* defined(__Shape__Cylinder__) */
