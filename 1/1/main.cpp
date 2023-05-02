#include <iostream>
#include "math_functions.hpp"

int main() {
    double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):" << std::endl;
    
    int choice;
    std::cin >> choice;
    
    double result;
    switch(choice) {
        case 1:
            result = add(a, b);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 2:
            result = subtract(a, b);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 3:
            result = multiply(a, b);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 4:
            if (b == 0) {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
                return 1;
            }
            result = divide(a, b);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 5:
            result = power(a, b);
            std::cout << "Результат: " << result << std::endl;
            break;
        default:
            std::cout << "Ошибка: неправильный выбор операции!" << std::endl;
            return 1;
    }
    
    return 0;
}
