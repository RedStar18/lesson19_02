#include "IsoscelesTriangle.h"
#include <iostream>
#include "FigureException.h"

IsoscelesTriangle::IsoscelesTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int C) : Triangle(a, b, c, A, B, C)
{
    if (a != c)
    {
        throw FigureException("Сторона a не равнв стороне c");
    }

    if (A != C)
    {
        throw FigureException("Угол A не равен углу C");
    }
}

std::string IsoscelesTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Равнобедренный треугольник";
}
