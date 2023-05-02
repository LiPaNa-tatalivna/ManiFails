//
//  Rhomb.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "Rhomb.hpp"


Rhomb::Rhomb(int sideLengthA, int angleA, int angleB)
    : Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
{
    Quadrilateral::nameOfFigure_ = "Ромб";
};

