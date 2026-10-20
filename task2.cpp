#include <iostream>
#include <string>

// Задача 2
int NumberAnalysis(long long n) {
    int sum = 0;
    int even = 0;

    while (n > 0) {
        int digitSum = n % 10;
        sum += digitSum;
        even += 1 - (digitSum % 2);
        n /= 10;
    }
    return even * 1000 + sum;
}

int main() {
    long long n;
    std::cin >> n;

    int result = NumberAnalysis(n);
    std::cout << result % 1000 << " " <<  result / 1000 << '\n';

}
