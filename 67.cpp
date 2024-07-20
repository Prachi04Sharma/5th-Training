//write a program to find the duplicate number from string
/*let say string jhon12Doe14@gmail18.com8
1 -number -1 is 3 times
8 -number -2 times*/
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "jhon12Doe14@gmail.com8";
    unordered_map<char, int> countMap;
    for (char c : s)
    {
        if (isdigit(c))
        {
            countMap[c]++;
        }
    }
    for (const auto &entry : countMap)
    {
        cout << entry.first << " : " << entry.second << endl;
    }
    return 0;
}