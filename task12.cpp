#include <iostream>
#include <cmath>
#include <complex>

int main() 
{
    int type;
    std::cout << "Выберите тип уравнения:\n";
    std::cout << "1: ax^4 + bx^2 + c = 0\n";
    std::cout << "2: ax^4 + bx^3 + cx^2 + bx + a = 0\n";
    std::cout << "3: x^3 + px + q = 0\n";
    std::cout << "Ваш выбор: ";
    std::cin >> type;

    if (type == 1) 
    {
        double a, b, c;
        std::cout << "Введите a, b, c: ";
        std::cin >> a >> b >> c;
        if (a == 0) 
        {
            std::cout << "Это не биквадратное уравнение!" << std::endl;
            return 1;
        }
        double D = b * b - 4 * a * c;
        if (D < 0) 
        {
            std::cout << "Нет действительных корней" << std::endl;
        }
        else 
        {
            double t1 = (-b + std::sqrt(D)) / (2 * a);
            double t2 = (-b - std::sqrt(D)) / (2 * a);
            bool found = false;
            if (t1 >= 0) 
            {
                std::cout << "x1 = " << std::sqrt(t1) << ", x2 = " << -std::sqrt(t1) << std::endl;
                found = true;
            }
            if (t2 >= 0 && std::abs(t1 - t2) > 1e-9) 
            {
                std::cout << "x3 = " << std::sqrt(t2) << ", x4 = " << -std::sqrt(t2) << std::endl;
                found = true;
            }
            if (!found) std::cout << "Нет действительных корней (t < 0)" << std::endl;
        }
    }
    else if (type == 2) 
    {
        double a, b, c;
        std::cout << "Введите a, b, c: ";
        std::cin >> a >> b >> c;
        if (a == 0) 
        {
            std::cout << "Это не возвратное уравнение (a=0)!" << std::endl;
            return 1;
        }
        
        double A = a;
        double B = b;
        double C = c - 2 * a;
        double D = B * B - 4 * A * C;
        if (D < 0) 
        {
            std::cout << "Нет действительных корней" << std::endl;
        }
        else 
        {
            double y1 = (-B + std::sqrt(D)) / (2 * A);
            double y2 = (-B - std::sqrt(D)) / (2 * A);
            
            double D1 = y1 * y1 - 4;
            if (D1 >= 0) 
            {
                std::cout << "x1 = " << (y1 + std::sqrt(D1)) / 2 << ", x2 = " << (y1 - std::sqrt(D1)) / 2 << std::endl;
            }
            double D2 = y2 * y2 - 4;
            if (D2 >= 0 && std::abs(y1 - y2) > 1e-9) 
            {
                std::cout << "x3 = " << (y2 + std::sqrt(D2)) / 2 << ", x4 = " << (y2 - std::sqrt(D2)) / 2 << std::endl;
            }
        }
    }
    else if (type == 3) 
    {
        double p, q;
        std::cout << "Введите p, q: ";
        std::cin >> p >> q;
        double Q = -q / 2.0;
        double P = p / 3.0;
        double D = Q * Q + P * P * P;
        if (D > 0) 
        {
            double u = std::cbrt(Q + std::sqrt(D));
            double v = std::cbrt(Q - std::sqrt(D));
            std::cout << "x = " << u + v << std::endl;
        }
        else if (std::abs(D) < 1e-9) 
        {
            double u = std::cbrt(Q);
            std::cout << "x1 = " << 2 * u << ", x2 = " << -u << std::endl;
        }
        else 
        {
            const double PI = 3.14159265358979323846;

            double r = std::sqrt(-P * P * P);
            double phi = std::acos(Q / r);
            double x1 = 2 * std::sqrt(-P) * std::cos(phi / 3);
            double x2 = 2 * std::sqrt(-P) * std::cos((phi + 2 * PI) / 3);
            double x3 = 2 * std::sqrt(-P) * std::cos((phi + 4 * PI) / 3);
            std::cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << std::endl;
        }
    }
    return 0;
}