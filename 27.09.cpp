#include <iostream>
#include <Windows.h>

int Multi(int a, int b);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a = -10;
    int b = -64;
    int result = Multi(a, b);
    std::cout << "Результат умножения: " << result ;

    return 0;
}

int Multi(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -Multi(a, -b);
    }

    return a + Multi(a, b - 1);
}