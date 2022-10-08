#include <iostream>

int Plus(int a, int b);

int Minus(int a, int b);

int main() {
    std::cout << "Hello, this is SimpCalc!" << std::endl;
    int a;
    std::string sign;
    int b;
    std::cin >> a >> sign >> b;
    std::cout << a << " " << sign << " " << b << " = ";
    if (sign == "+")
        std::cout << a + b;
    if (sign == "-")
        std::cout << a - b;
        return 0;
}

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a + b;
}
