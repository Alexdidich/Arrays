#include <iostream>
#include <vector>
//задача1
int main() {
    std::vector<int> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int shiftAmount;

    std::cout << "Enter the shift amount (left): ";
    std::cin >> shiftAmount;

    shiftAmount = shiftAmount % arr.size(); 
    if (shiftAmount < 0) {
        shiftAmount += arr.size(); 
    }

    std::vector<int> shiftedArr(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        shiftedArr[i] = arr[(i + shiftAmount) % arr.size()];
    }
    std::cout << "Shifted array: ";
    for (int i = 0; i < shiftedArr.size(); ++i) {
        std::cout << shiftedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//задача2
int main() {
    std::vector<int> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int shiftAmount;

    std::cout << "Enter the shift amount (right): ";
    std::cin >> shiftAmount;

    shiftAmount = shiftAmount % arr.size(); 
    if (shiftAmount < 0) {
        shiftAmount += arr.size(); 
    }
    std::vector<int> shiftedArr(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        shiftedArr[(i + shiftAmount) % arr.size()] = arr[i];
    }

    std::cout << "Shifted array: ";
    for (int i = 0; i < shiftedArr.size(); ++i) {
        std::cout << shiftedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}