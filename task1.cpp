#include <iostream>
int main() {
    double x;
    std::cout << "Введите x: ";
    std::cin >> x;

    double result = x * (x * (23.0 * x + 69.0) + 32.0) + 8.0;

    std::cout << "Результат: " << result << std::endl;
    return 0;
}