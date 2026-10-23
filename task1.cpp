#include <iostream>
#include <cmath>

// Задача 1.
void TriangleType(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 ||
          a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Не существует" << '\n';
        return;
          }

    if (a == b && b == c) {
        std::cout << "Равносторонний" << '\n';
    } else if (a == b || b == c || a == c) {
        std::cout << "Равнобедренный" << '\n';
    } else {
        std::cout << "Разносторонний" << '\n';
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    TriangleType(a, b, c);

    return 0;
}
