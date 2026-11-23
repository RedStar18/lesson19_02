#include "Parallelogram.h"
#include <iostream>
#include "FigureException.h"

Parallelogram::Parallelogram(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D) : Quadrangle(a, b, c, d, A, B, C, D)
{
	if ((a!= c) && (b != d))
	{
		throw FigureException("Стороны a,c и b,d попарно не ровны другдругу");
	}

	if ((A != C) && (B != D))
	{
		throw FigureException("Углы A,C и B,D попарно не ровны другдругу");
	}
}

std::string Parallelogram::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Параллелограмм";
}
