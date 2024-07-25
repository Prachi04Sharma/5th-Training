// Find the duplicate words in a array of string
//String Manipulation approach 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> str;
    string word;
    cout << "Enter your sentence: ";
    while (cin >> word)
    {
        str.push_back(word);
        if (cin.peek() == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < str.size() - 1; i++)
    {
        for (int j = i + 1; j < str.size() ; j++)
        {
            if (str[i] == str[j])
            {
                cout << "Duplicate word found at index " << j << " is : " << str[i] << endl;
            }
           /* else
            {
                i++;
            }*/
        }
    }
    return 0;
}
