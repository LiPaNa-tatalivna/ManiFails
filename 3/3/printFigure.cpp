//
//  printFigure.cpp
//  Mn_F_
//
//  Created by Liza Stepanova on 22.04.2023.
//

#include "printFigure.hpp"


void printFigure(Figure &figure)
{
    std::cout << std::endl;
    std::cout << figure.getNameOfFigure() << ":" << std::endl;

    std::cout << "Стороны:";
    std::cout << " a = " << figure.getSideLengthA() << ", b = " << figure.getSideLengthB() << ", с = " << figure.getSideLengthC();
    if (figure.getHaveFourSides())
    {
        std::cout << ", d = " << figure.getSideLengthD() << std::endl;
    }
    else { std::cout << std::endl; }

    std::cout << "Углы:";
    std::cout << " А = " << figure.getAngleA() << ", В = " << figure.getAngleB() << ", С = " << figure.getAngleC();
    if (figure.getHaveFourSides()) { std::cout << ", D = " << figure.getAngleD() << std::endl; }
    else { std::cout << std::endl; }
}
