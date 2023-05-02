//
//  equilateralTriangle.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "equilateralTriangle.hpp"


equilateralTriangle::equilateralTriangle(int sideLengthA)
    : Triangle(sideLengthA, sideLengthA, sideLengthA, 60, 60, 60)
{
    Triangle::nameOfFigure_ = "Равносторонний треугольник";
};
