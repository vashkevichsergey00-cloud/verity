#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    int N;

    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;
    std::cout << "Введите N: ";
    std::cin >> N;

    double y;

    switch (N) 
    {
    case 2:
        y = b * c - a * a;
        break;
    case 56:
        y = b * c;
        break;
    case 7:
        y = a * a + c;
        break;
    case 3:
        y = a - b;
        break;
    default:
        y = std::pow((a + b), 2);
        break;
    }

    std::cout << "y = " << y << std::endl;
    return 0;
}
