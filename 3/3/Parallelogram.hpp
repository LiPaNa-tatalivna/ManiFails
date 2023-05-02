//
//  Parallelogram.hpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#ifndef Parallelogram_hpp
#define Parallelogram_hpp

#include <stdio.h>
#include "Quadrilateral.hpp"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB);
};


#endif /* Parallelogram_hpp */
