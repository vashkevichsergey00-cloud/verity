#include <iostream>
#include <cmath>

int main() 
{

    int choice;
    double x, y;

    std::cout << "Введите x: ";

    std::cin >> x;

    std::cout << "Выберите функцию (1: 2x, 2: x^3, 3: x/3): ";

    std::cin >> choice;

    switch (choice) 

    {

    case 1:
        y = 2 * x;
        std::cout << "Выбрана функция f(x) = 2x" << std::endl;
        break;
    case 2:
        y = std::pow(x, 3);
        std::cout << "Выбрана функция f(x) = x^3" << std::endl;
        break;
    case 3:
        y = x / 3.0;
        std::cout << "Выбрана функция f(x) = x/3" << std::endl;
        break;
    default:
        std::cout << "Неверный номер функции!" << std::endl;
        return 1;

    }

    std::cout << "y = " << y << std::endl;
    return 0;

}
