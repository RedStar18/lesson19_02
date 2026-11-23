// lesson19_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"

#include "FigureException.h"

void print_info(Figure* fig);

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    
    try
    {
        Triangle triangle = Triangle(10, 20, 30, 50, 60, 70);
        print_info(&triangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        RightTriangle right_triangle = RightTriangle(10, 20, 30, 40, 60, 80);
        print_info(&right_triangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        IsoscelesTriangle isosceles_triangle = IsoscelesTriangle(10, 20, 10, 70, 60, 50);
        print_info(&isosceles_triangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        EquilateralTriangle equilateral_triangle = EquilateralTriangle(10, 20, 10, 60, 60, 60);
        print_info(&equilateral_triangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        Quadrangle quadrangle = Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        print_info(&quadrangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        Parallelogram parallelogram = Parallelogram(20, 30, 20, 30, 10, 170, 10, 170);
        print_info(&parallelogram);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        class Rectangle rectangle = class Rectangle(10, 20, 10, 20, 90, 90, 90, 80);
        print_info(&rectangle);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        Square square = Square(20, 20, 20, 20, 90, 90, 90, 90);
        print_info(&square);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    try
    {
        Rhombus rhombus = Rhombus(30, 30, 30, 30, 40, 140, 40, 140);
        print_info(&rhombus);
    }
    catch (const FigureException& ex)
    {
        std::cout << "Ошибка создания фигуры.Причина: " << ex.what() << std::endl << std::endl;
    }

    

    return 0;
}

void print_info(Figure* fig)
{
    std::cout << fig->get_name() << ":\n" << "Стороны: " << fig->get_sides_info() << "\n" << "Углы: " << fig->get_angles_info() << "\n\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
