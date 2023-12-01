#include <iostream>

int main() {
    int a = 42;
    int b = 153;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "--------" << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}
