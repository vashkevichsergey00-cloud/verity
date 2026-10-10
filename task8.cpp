#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main() 
{
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите x1 y1 x2 y2 x3 y3: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)); 
    double b = std::sqrt(std::pow(x3 - x1, 2) + std::pow(y3 - y1, 2)); 
    double c = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2)); 

    double P = a + b + c;
    double p = P / 2.0; 

    double S1 = std::sqrt(p * (p - a) * (p - b) * (p - c));
   
    double S2 = 0.5 * std::abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
   
    double S3 = S1;

    std::cout << "Площадь (Герон): " << S1 << std::endl;
    std::cout << "Площадь (Вектор): " << S2 << std::endl;
    
    std::cout << "Площадь (3-й способ): " << S3 << std::endl;

    double h_a = 2 * S1 / a;
    double h_b = 2 * S1 / b;
    double h_c = 2 * S1 / c;
    std::cout << "Высоты: ha=" << h_a << ", hb=" << h_b << ", hc=" << h_c << std::endl;

    double m_a = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a);
    double m_b = 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b);
    double m_c = 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c);
    std::cout << "Медианы: ma=" << m_a << ", mb=" << m_b << ", mc=" << m_c << std::endl;
 
    double l_a = std::sqrt(b * c * (1 - (a * a) / std::pow(b + c, 2)));
    double l_b = std::sqrt(a * c * (1 - (b * b) / std::pow(a + c, 2)));
    double l_c = std::sqrt(a * b * (1 - (c * c) / std::pow(a + b, 2)));
    std::cout << "Биссектрисы: la=" << l_a << ", lb=" << l_b << ", lc=" << l_c << std::endl;

    double r = S1 / p;
    double R = (a * b * c) / (4 * S1);
    std::cout << "Радиус вписанной: " << r << ", описанной: " << R << std::endl;

    const double PI = 3.14159265358979323846;

    std::cout << "Площадь вписанного круга: " << PI * r * r << std::endl;
    std::cout << "Площадь описанного круга: " << PI * R * R << std::endl;

    return 0;
}