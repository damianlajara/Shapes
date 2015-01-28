//
//  Sphere.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Sphere__
#define __Shape__Sphere__

#include "threeDshape.h"
class Sphere : public threeDshape {
    private:
        double radius;
        int faces = 0;
        int edges = 0;
        int vertices = 0;
    public:
        Sphere();
        Sphere(double newRadius);
        ~Sphere();
        //virtual functions
    virtual void calculateVolume()override;
        virtual void calculateSurfaceArea() override;
        virtual void print() override;
        virtual double getVolume() override;
        virtual double getSurfaceArea() override;
        virtual int getVertices() override;
        virtual int getEdges() override;
        virtual int getFaces() override;
    
};
#endif /* defined(__Shape__Sphere__) */
