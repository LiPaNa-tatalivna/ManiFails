//
//  rightTriangle.hpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#ifndef rightTriangle_hpp
#define rightTriangle_hpp

#include <stdio.h>
#include "Triangle.hpp"
 
class rightTriangle : public Triangle
{
public:
    rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
};


#endif /* rightTriangle_hpp */
