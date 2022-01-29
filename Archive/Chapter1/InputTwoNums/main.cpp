#include <iostream>

int main() {
    std::cout << "Please enter two numbers:\n";
    int x{}, y{};
    std::cin >> x >> y;
    std::cout << "The number you entered is: " << x << " and " << y << std::endl;
    return 0;
}