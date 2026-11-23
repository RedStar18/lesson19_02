#pragma once

#include <string>

class Figure
{
protected:
    unsigned int sides_count{ 0 };

public:
    Figure();
    unsigned int get_sides_count();

    virtual std::string get_name() = 0;
    virtual std::string get_sides_info() = 0;
    virtual std::string get_angles_info() = 0;
};
