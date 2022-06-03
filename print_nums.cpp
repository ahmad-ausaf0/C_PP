#include <iostream>

int main() {
    // Write C++ code here
    int n;
    std::cout << "Enter a number to print till that number: " <<std::endl;
    std::cin >> n;
    int i = 1;
    while (i <= n) {
        std::cout << i << " ";
        i = i + 1;
    }

    return 0;
}
