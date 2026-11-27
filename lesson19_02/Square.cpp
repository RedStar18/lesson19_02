#include "Square.h"
#include <iostream>
#include "FigureException.h"

Square::Square(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D) : Quadrangle(a, b, c, d, A, B, C, D)
{
	if ((a != b) || (b != c) || (c != d) || (d != a))
	{
		throw FigureException("Не все стороны равны другдругу");
	}

	if ((A != 90) || (B != 90) || (C != 90) || (D != 90))
	{
		throw FigureException("Не все углы равны 90 градусам");
	}
}

std::string Square::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Квадрат";
}
