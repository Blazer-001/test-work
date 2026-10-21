#include <iostream>
#include <string>

// Задача 3.
void SwapValues(int* a, int* b) {
    if (a == nullptr || b == nullptr)
        return;

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    SwapValues(&a, &b);

    std::cout << a << " " << b << '\n';

    return 0;
}
