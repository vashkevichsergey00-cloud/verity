#include <iostream>
#include <cmath> // Подключаем для cos() и pow()

int main() 
{
    double x, D;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите D: ";
    std::cin >> D;

    double A = D * x * x;          
    double b = x + D;

    double numerator = A * A + b * std::cos(x);

    double denominator = D * D * D + std::pow((A + D - b), 2);

    double S = numerator / denominator;

    std::cout << "S = " << S << std::endl;
    return 0;
}