#include "Rectangle.h"
#include <iostream>
#include "FigureException.h"

Rectangle::Rectangle(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D) : Quadrangle(a, b, c, d, A, B, C, D)
{
	if ((a != c) || (b != d))
	{
		throw FigureException("Стороны a,c и b,d попарно не ровны другдругу");
	}

	if ((A != 90) || (B != 90) || (C != 90) || (D != 90))
	{
		throw FigureException("Не все углы равны 90 градусам");
	}
}

std::string Rectangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Прямоугольник";
}
