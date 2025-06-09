#include <iostream>
#include <string>
#include <algorithm>
//задача1
int main() {
    int decimalNum;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNum;

    if (decimalNum == 0) {
        std::cout << "Binary: 0" << std::endl;
        return 0;
    }

    std::string binary = "";
    while (decimalNum > 0) {
        binary += (decimalNum % 2 == 0 ? '0' : '1');  // Ternary operator for simplicity
        decimalNum /= 2;
    }

    std::reverse(binary.begin(), binary.end());  // Reverse the string

    std::cout << "Binary: " << binary << std::endl;

    return 0;
}
//задача2
int main() {
    int decimalNum;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNum;

    if (decimalNum == 0) {
        std::cout << "Hexadecimal: 0" << std::endl;
        return 0;
    }

    std::string hexadecimal = "";
    char hexChars[] = "0123456789ABCDEF";

    while (decimalNum > 0) {
        hexadecimal = hexChars[decimalNum % 16] + hexadecimal; // Prepend hex char
        decimalNum /= 16;
    }

    std::cout << "Hexadecimal: " << hexadecimal << std::endl;

    return 0;
}