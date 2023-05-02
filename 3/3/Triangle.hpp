
#ifndef Triangle_hpp
#define Triangle_hpp

#include "Class.hpp"
#include <stdio.h>


class Triangle : public Figure
{
public:
    //Конструктор треугольника
    Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC);
};


#endif /* Triangle_hpp */
