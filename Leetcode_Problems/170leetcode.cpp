//Leetcode - 231 Power of Two
#include <iostream>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;
        while (n % 2 == 0) n /= 2;
        return n == 1;
    }
};
int main() {
    Solution solution;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (solution.isPowerOfTwo(num)) {
        std::cout << num << " is a power of two." << std::endl;
    } else {
        std::cout << num << " is not a power of two." << std::endl;
    }

    return 0;
}
