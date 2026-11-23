#include "Quadrangle.h"
#include <iostream>
#include "FigureException.h"

Quadrangle::Quadrangle(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
    sides_count = 4;

    if ((A + B + C + D) != 360)
    {
        throw FigureException("Сумма угллов не равна 360 градусам");
    }
}

unsigned int Quadrangle::get_a() const { return a; }
unsigned int Quadrangle::get_b() const { return b; }
unsigned int Quadrangle::get_c() const { return c; }
unsigned int Quadrangle::get_d() const { return d; }
unsigned int Quadrangle::get_A() const { return A; }
unsigned int Quadrangle::get_B() const { return B; }
unsigned int Quadrangle::get_C() const { return C; }
unsigned int Quadrangle::get_D() const { return D; }

std::string Quadrangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Четырёхугольник";
}
std::string Quadrangle::get_sides_info()
{
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
}
std::string Quadrangle::get_angles_info()
{
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
}
