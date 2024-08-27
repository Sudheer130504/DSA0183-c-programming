#include <iostream>

void getPerson(int& age) {
    std::cout << "Enter your age: ";
    std::cin >> age;
}

bool isEligibleToVote(int age) {
    return age >= 18;
}

int yearsLeftToBeEligible(int age) {
    return 18 - age;
}

int main() {
    int age;
    getPerson(age);

    if (isEligibleToVote(age)) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = yearsLeftToBeEligible(age);
        std::cout << "You are allowed to vote after " << yearsLeft << " years." << std::endl;
    }

    return 0;
}
