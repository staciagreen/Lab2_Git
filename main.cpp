#include <iostream>

int Plus(int a, int b);

int Minus(int a, int b);

int Multiplication(int a, int b);

int Division(int a, int b);

int main() {
    std::cout << "Hello, this is SimpCalc!" << std::endl;
    std::cout << "Put two integers and a sign between(+, -, *, /).";
    std::cout << "*don't fordet to use spaces*";
    int a;
    std::string sign;
    int b;
    std::cin >> a >> sign >> b;
    std::cout << a << " " << sign << " " << b << " = ";
    if (sign == "+")
        std::cout << Plus(a, b);
    if (sign == "-")
        std::cout << Minus(a, b);
    if (sign == "*")
        std::cout << Multiplication(a, b);
    if (sign == "/")
        std::cout << Division(a, b);
    return 0;
}

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a + b;
}

int Multiplication(int a, int b) {
    return a * b;
}

int Division(int a, int b) {
    return a / b;
}