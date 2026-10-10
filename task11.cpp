#include <iostream>

int main() {
    int h1, min1, h2, min2;

    std::cout << "Введите время начала (часы|минуты): ";
    std::cin >> h1 >> min1;

    std::cout << "Введите время окончания (часы|минуты): ";
    std::cin >> h2 >> min2;

    int start = h1 * 60 + min1;
    int end = h2 * 60 + min2;

    if (end < start) {
        end += 24 * 60;
    }

    int totalMinutes = end - start;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    std::cout << "Затрачено времени: " << hours << " ч " << minutes << " мин" << std::endl;

    return 0;
}