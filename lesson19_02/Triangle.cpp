#include "Triangle.h"
#include <iostream>
#include "FigureException.h"

Triangle::Triangle() {}

Triangle::Triangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int C) : a(a), b(b), c(c), A(A), B(B), C(C)
{
    sides_count = 3;
    if ((A + B + C) != 180)
    {
        throw FigureException("Сумма угллов не равна 180 градусам");
    }
}

unsigned int Triangle::get_a() const { return a; }
unsigned int Triangle::get_b() const { return b; }
unsigned int Triangle::get_c() const { return c; }
unsigned int Triangle::get_A() const { return A; }
unsigned int Triangle::get_B() const { return B; }
unsigned int Triangle::get_C() const { return C; }

std::string Triangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Треугольник";
}
std::string Triangle::get_sides_info()
{
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
}
std::string Triangle::get_angles_info()
{
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
}
