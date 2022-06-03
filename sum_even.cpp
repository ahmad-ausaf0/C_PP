// Sum of n even numbers using while loop

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number : " <<std::endl;
    std::cin >> n;
    int sum = 0;
    int i = 2;
    while (i <= n) {
        if(i % 2 == 0) {
            sum = sum + i;
        }
        i = i + 1;  
        
    }
     std::cout << "Sum of even numbers is: "<< sum << std::endl;

    return 0;
}
