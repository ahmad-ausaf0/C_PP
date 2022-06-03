// Sum of n numbers
#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number : " <<std::endl;
    std::cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }
     std::cout << "Sum is: "<< sum << std::endl;

    return 0;
}
