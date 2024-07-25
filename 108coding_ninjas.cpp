#include <bits/stdc++.h> 
using namespace std;

string reverseString(string str) {
    int left = 0;
    int right = str.size() - 1;
    
    // Swap characters from the beginning and end moving towards the center
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    
    return str;
}

int main() {
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;
    string reversed = reverseString(str);
    cout << "Reversed String: " << reversed << endl;
    return 0;
}
