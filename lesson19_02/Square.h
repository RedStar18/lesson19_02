#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int A, unsigned int B, unsigned int C, unsigned int D);

    std::string get_name() override;
};
