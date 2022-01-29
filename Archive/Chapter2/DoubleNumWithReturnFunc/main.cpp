#include <iostream>

void doubleNum(int x) {
    std::cout << x << " doubled is: " << x * 2 << "\n";
}

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
//    int input{getValueFromUser()};
//    doubleNum(input);
    doubleNum(getValueFromUser());

    return 0;
}