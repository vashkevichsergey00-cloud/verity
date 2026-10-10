#include <iostream>
#include <cmath>

int main() 
{
    double x1, y1, r, x2, y2, R;

    std::cout << "Введите координаты и радиус первого круга (x1 y1 r): ";
    std::cin >> x1 >> y1 >> r;

    std::cout << "Введите координаты и радиус второго круга (x2 y2 R): ";
    std::cin >> x2 >> y2 >> R;

    double d = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    if (d + r <= R) 
    {
        std::cout << "Да" << std::endl;
    }
    else if (d + R <= r) 
    {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    }
    else if (d < r + R) 
    {
        std::cout << "Фигуры пересекаются" << std::endl;
    }
    else 
    {
        std::cout << "Ни одно условие не выполнено" << std::endl;
    }

    return 0;
}