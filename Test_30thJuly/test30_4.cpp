/*Question 4 : Leetcode 771 Jewels and Stones
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have.
Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/
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
