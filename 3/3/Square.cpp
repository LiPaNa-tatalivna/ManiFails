//
//  Square.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "Square.hpp"

Square::Square(int sideLengthA)
    : Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
{
    Quadrilateral::nameOfFigure_ = "Квадрат";
};
