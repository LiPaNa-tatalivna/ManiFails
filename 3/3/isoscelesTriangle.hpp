//
//  isoscelesTriangle.hpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#ifndef isoscelesTriangle_hpp
#define isoscelesTriangle_hpp

#include <stdio.h>
#include "Triangle.hpp"

class isoscelesTriangle : public Triangle
{
public:
    isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
};

#endif /* isoscelesTriangle_hpp */
