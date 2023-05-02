//
//  Rectangle.hpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Quadrilateral.hpp"


class Rectangle : public Quadrilateral
{
public:
    Rectangle(int sideLengthA, int sideLengthB);
    
};

#endif /* Rectangle_hpp */
