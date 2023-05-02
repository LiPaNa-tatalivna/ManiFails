//
//  isoscelesTriangle.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "isoscelesTriangle.hpp"

isoscelesTriangle::isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
    : Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
{
    Triangle::nameOfFigure_ = "Равнобедренный треугольник";
};
