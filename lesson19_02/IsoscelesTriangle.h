#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle
{
public:

    IsoscelesTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int C);

    std::string get_name() override;
};
