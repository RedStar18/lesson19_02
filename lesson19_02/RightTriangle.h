#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:

    RightTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B, unsigned int С);

    std::string get_name() override;
};
