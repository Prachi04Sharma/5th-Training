// Linked List

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_front(20);
    myList.push_back(30);
    myList.push_front(40);
    myList.push_back(30); // Adding duplicate element to demonstrate unique()

    // Print the elements of the list
    cout << "Initial list: ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Erase the first element
    myList.erase(myList.begin());
    cout << "After erasing the first element: ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Use the unique function to remove consecutive duplicates
    myList.unique();
    cout << "After unique(): ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Reverse the list
    myList.reverse();
    cout << "After reverse(): ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Resize the list to 3 elements
    myList.resize(3);
    cout << "After resize(3): ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Resize the list to 5 elements, new elements initialized to 100
    myList.resize(5, 100);
    cout << "After resize(5, 100): ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Print the final size of the list
    cout << "Final size of list: " << myList.size() << endl;

    return 0;
}

