//
//  Parallelogram.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "Parallelogram.hpp"

Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
    : Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
{
    Quadrilateral::nameOfFigure_ = "Параллелограмм";
};
