#include <iostream>

float Plus(float a, float b);

float Minus(float a, float b);

float Multiplication(float a, float b);

float Division(float a, float b);

int main() {
    std::cout << "Hello, this is SimpCalc!" << std::endl;
    std::cout << "Put two floategers and a sign between(+, -, *, /).";
    std::cout << "*don't fordet to use spaces*";
    float a;
    std::string sign;
    float b;
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

float Plus(float a, float b) {
    return a + b;
}

float Minus(float a, float b) {
    return a - b;
}

float Multiplication(float a, float b) {
    return a * b;
}

float Division(float a, float b) {
    return int(a / b * 100) / 100;
}