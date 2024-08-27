#include <iostream>

// Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    std::cout << "Enter the value for a: ";
    std::cin >> a;

    std::cout << "Enter the value for b: ";
    std::cin >> b;

    std::cout << "The value before swapping: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Call by Value
    swapByValue(a, b);
    std::cout << "The value after swapping for call by value: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Call by Reference
    swapByReference(a, b);
    std::cout << "The value after swapping for call by reference: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}
