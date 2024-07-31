/*Given an array in which the elements are in xxxyy format, where first xxx digits represent the
Bracnch code and the yy represents the account id. Find out the No. of accounts in the given branch code Input and Output Format : 
The first input n corresponds to the size of the array, the next n lines corresponds to the elements of the array and the last line of the input corresponds to the branch code.
Output corresponds to the number of accounts in the given branch code. If the given branch code is not available, print 0.
1)Print "Invalid array size" when size of the array is a negative number and terminate the program 
2)Print "Invalid account Number" when there is any negative number available in the input array and terminate the program.
3)Print "Invalid branch code" when branch code is negative number and terminate the program. Include a function named registerAccountNumbers(int size, int account_numbers[], int brnch_code) that returns the number of accounts.
Sample input 1 : 
6
12345
12370
12324
13355
13333
14575
123*/
#include <iostream>
#include <vector>

using namespace std;

int registerAccountNumbers(int size, int account_numbers[], int brnch_code) {
    if (size < 0) {
        cout << "Invalid array size" << endl;
        exit(1);
    }
    
    if (brnch_code < 0) {
        cout << "Invalid branch code" << endl;
        exit(1);
    }
    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (account_numbers[i] < 0) {
            cout << "Invalid account Number" << endl;
            exit(1);
        }
        
        int branch = account_numbers[i] / 100; // Extract the first 3 digits as branch code
        if (branch == brnch_code) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Invalid array size" << endl;
        return 1;
    }

    int* account_numbers = new int[n];
    cout << "Enter the account numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> account_numbers[i];
        if (account_numbers[i] < 0) {
            cout << "Invalid account Number" << endl;
            delete[] account_numbers;
            return 1;
        }
    }
    
    int branch_code;
    cout << "Enter the branch code: ";
    cin >> branch_code;
    
    if (branch_code < 0) {
        cout << "Invalid branch code" << endl;
        delete[] account_numbers;
        return 1;
    }

    int result = registerAccountNumbers(n, account_numbers, branch_code);
    cout << "Number of accounts in the given branch code: " << result << endl;

    delete[] account_numbers;
    return 0;
}
