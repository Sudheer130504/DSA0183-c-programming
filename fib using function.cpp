#include <iostream>

class Series {
private:
    int limit;

public:
    void input() {
        std::cout << "Enter the limit: ";
        std::cin >> limit;
    }

    void show() {
        int t1 = 0, t2 = 1, nextTerm = 0;

        std::cout << "Fibonacci Series: ";

        for (int i = 1; i <= limit; ++i) {
            std::cout << t1 << " ";

            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        std::cout << std::endl;
    }
};

int main() {
    Series series;

    series.input();
    series.show();

    return 0;
}
