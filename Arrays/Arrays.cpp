#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> arr = { 5, 2, 8, 1, 9, 4 }; 

    std::sort(arr.begin(), arr.end());

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}