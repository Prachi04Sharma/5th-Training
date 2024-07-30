//Leetcode 1704
#include <iostream>
#include <string>

using namespace std;

class Solution {
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int half = n / 2;
        int vowelCount1 = 0, vowelCount2 = 0;
        
        for (int i = 0; i < half; ++i) {
            if (isVowel(s[i])) {
                vowelCount1++;
            }
        }

        for (int i = half; i < n; ++i) {
            if (isVowel(s[i])) {
                vowelCount2++;
            }
        }
        return vowelCount1 == vowelCount2;
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (solution.halvesAreAlike(input)) {
        cout << "The two halves of the string are alike." << endl;
    } else {
        cout << "The two halves of the string are not alike." << endl;
    }

    return 0;
}
