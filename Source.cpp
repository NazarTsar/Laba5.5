#include <iostream>
using namespace std;
int countOnes(int n, int depth) {
    if (n == 0) {
        return 0;
    }
    else {
        std::cout << "Глибина рекурсії: " << depth << ", Рівень рекурсії: " << n << std::endl;
        return 1 + countOnes(n & (n - 1), depth + 1);
    }
}

int main() {
    int n = 37;
    int result = countOnes(n, 0);
    std::cout << "Кількість одиниць в двійковому представленні числа " << n << ": " << result << std::endl;
    return 0;
}
