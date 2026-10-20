#include <iostream>
#include <cmath>

// Задача 1.
void TriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        std::cout << "Равносторонний" << '\n';
    } else if (a == b || b == c || a == c) {
        std::cout << "Равнобедренный" << '\n';
    } else if (a != b != c != a) {
        std::cout << "Разносторонний" << '\n';
    } else {
        std::cout << "Не существует" << '\n';
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    TriangleType(a, b, c);
}