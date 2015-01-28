//
//  Cube.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__Cube__
#define __Shape__Cube__

#include "threeDshape.h"
class Cube : public threeDshape {
    private:
        double edgeLength;
        int faces = 5;
        int edges = 12;
        int vertices = 8;
    public:
        Cube();
        Cube(double newEdgeLength);
        ~Cube();
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
#endif /* defined(__Shape__Cube__) */
