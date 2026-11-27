#include "EquilateralTriangle.h"
#include <iostream>
#include "FigureException.h"

EquilateralTriangle::EquilateralTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int C) : Triangle(a, b, c, A, B, C)
{
	if ((a != b) || (b != c) || (c != a))
	{
		throw FigureException("Стороны не равны другдругу");
	}

	if ((A != B) || (B != C) || (C != A))
	{
		throw FigureException("Углы не равны другдругу");
	}
}

std::string EquilateralTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Равносторонний треугольник";
}
