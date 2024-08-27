#include <iostream>

int calculateSum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    std::cout << "Enter the value: ";
    std::cin >> a >> b >> c >> d;
    int sum = calculateSum(a, b, c, d);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
