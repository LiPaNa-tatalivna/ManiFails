//
//  Quadrilateral.hpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#ifndef Quadrilateral_hpp
#define Quadrilateral_hpp

#include "Class.hpp"
#include <stdio.h>

class Quadrilateral : public Figure
{

public:
    Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD);
};


#endif /* Quadrilateral_hpp */
