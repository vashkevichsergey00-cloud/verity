#include <iostream>

int main() 
{
    double b1;
    int n;
    std::cout << "Введите b1: ";
    std::cin >> b1;
    std::cout << "Введите n (номер в журнале): ";
    std::cin >> n;

    double q = 1.0 / (n + 1.0);
    double sum = b1 / (1.0 - q);

    std::cout << "Сумма прогрессии: " << sum << std::endl;
    return 0;
}