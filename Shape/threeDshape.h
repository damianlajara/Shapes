//
//  threeDshape.h
//  Shape
//
//  Created by Damian Lajara on 12/13/14.
//  Copyright (c) 2014 OOP. All rights reserved.
//

#ifndef __Shape__threeDshape__
#define __Shape__threeDshape__

#include "Shape.h"
class threeDshape : public Shape {
    protected:
        int faces;
        int edges;
        double volume;
        double surfaceArea;
        double vertices;
    public:
        threeDshape();
        ~threeDshape();
        //virtual functions
        virtual void calculateVolume() =0;
        virtual void calculateSurfaceArea() =0;
        virtual void print() override =0;
        virtual double getVolume() =0;
        virtual double getSurfaceArea() =0;
        virtual int getVertices() =0;
        virtual int getEdges() =0;
        virtual int getFaces() =0;
    
};
#endif /* defined(__Shape__threeDshape__) */
