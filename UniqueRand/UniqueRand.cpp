#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    for (int i = 20; i <= 30; ++i) {
        numbers.push_back(i);
    }

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);

    std::vector<int> uniqueRandom(numbers.begin(), numbers.begin() + 10);

    std::cout << "Array with unique random numbers: ";
    for (int num : uniqueRandom) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}