#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:
    unsigned int a{ 0 }, b{ 0 }, c{ 0 }, A{ 0 }, B{ 0 }, C{ 0 };
public:
    Triangle();

    Triangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int C);

    unsigned int get_a() const;
    unsigned int get_b() const;
    unsigned int get_c() const;
    unsigned int get_A() const;
    unsigned int get_B() const;
    unsigned int get_C() const;

    std::string get_name() override;
    std::string get_sides_info() override;
    std::string get_angles_info() override;
};
