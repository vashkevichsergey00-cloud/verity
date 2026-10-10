#include <iostream>

int main() 
{
    double X, Y;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;


    double max1 = (X > Y) ? X : Y;
    std::cout << "Максимум (тернарный): " << max1 << std::endl;


    bool isXGreater = (X > Y);
    double max2;
    if (isXGreater) 
    {
        max2 = X;
    }
    else 
    {
        max2 = Y;
    }
    std::cout << "Максимум (bool): " << max2 << std::endl;

    return 0;
}