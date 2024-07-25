//Leetcode 771
#include <iostream>
#include <string>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int count = 0;
        for (int i = 0; i < jewels.size(); i++) {
            for (int j = 0; j < stones.size(); j++) {
                if (jewels[i] == stones[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    std::string jewels, stones;

    std::cout << "Enter the jewels string: ";
    std::cin >> jewels;

    std::cout << "Enter the stones string: ";
    std::cin >> stones;

    int result = solution.numJewelsInStones(jewels, stones);
    std::cout << "Number of jewels in stones: " << result << std::endl;

    return 0;
}
