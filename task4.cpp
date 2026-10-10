#include <iostream>

int main() 
{
    int X, Y, A, B, C, K;

    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;

    if (X < Y) 
    {
        X = 0;       
        Y = Y * 2;   
    }
    else 
    {
        Y = 0;       
        X = X * 2;   
    }

    std::cout << "После обработки: X = " << X << ", Y = " << Y << std::endl;

    std::cout << "Введите A, B, C: ";
    std::cin >> A >> B >> C;

    int maxVal = A;
    if (B > maxVal) maxVal = B;
    if (C > maxVal) maxVal = C;

    std::cout << "Максимальное из A, B, C: " << maxVal << std::endl;

    std::cout << "Введите K: ";
    std::cin >> K;

    A -= K;
    B -= K;
    C -= K;

    std::cout << "A = " << A << ", B = " << B << ", C = " << C << std::endl;

    return 0;
}