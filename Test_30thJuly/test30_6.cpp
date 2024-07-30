/*Question 6 : Leetcode
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.
A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.*/

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
