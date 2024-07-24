#include <iostream>
using namespace std;
int main()
{
    // Declaration and initialization of a 2-D Array
    int arr[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}};
    // Accessing elements
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Sum of first row elements
        int sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum += arr[0][i];
        }
        cout << sum;
        return 0;
    }