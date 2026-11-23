#include "Rhombus.h"
#include <iostream>
#include "FigureException.h"

Rhombus::Rhombus(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D) : Quadrangle(a, b, c, d, A, B, C, D)
{
	if ((a != b) && (b != c) && (c != d) && (d != a))
	{
		throw FigureException("Не все стороны равны другдругу");
	}

	if ((A != C) && (B != D))
	{
		throw FigureException("Углы A,C и B,D попарно не ровны другдругу");
	}
}

std::string Rhombus::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Ромб";
}
