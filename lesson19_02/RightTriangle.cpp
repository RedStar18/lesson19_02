#include "RightTriangle.h"
#include <iostream>
#include "FigureException.h"

RightTriangle::RightTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int С) : Triangle(a, b, c, A, B, С)
{
    if (C != 90)
    {
        throw FigureException("Угол C не равен 90");
    }
}

std::string RightTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Прямоугольный треугольник";
}
