//1859 Leetcode
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::istringstream stream(s);
        std::vector<std::string> words(9);
        std::string word;
        while (stream >> word) {
            int position = word.back() - '0'; 
            word.pop_back();
            words[position - 1] = word;
        }
        std::string result;
        for (size_t i = 0; i < words.size(); ++i) {
            if (!words[i].empty()) { 
                if (i > 0) result += " ";
                result += words[i];
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    std::string input;

    std::cout << "Enter the sentence: ";
    std::getline(std::cin, input);

    std::string sortedSentence = solution.sortSentence(input);
    std::cout << "Sorted sentence: " << sortedSentence << std::endl;

    return 0;
}
