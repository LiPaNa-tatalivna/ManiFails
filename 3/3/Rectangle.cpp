//
//  Rectangle.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "Quadrilateral.hpp"
#include "Rectangle.hpp"


Rectangle::Rectangle(int sideLengthA, int sideLengthB)
    : Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
{
    Quadrilateral::nameOfFigure_ = "Прямоугольник";
    
};
