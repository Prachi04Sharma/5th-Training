// Access elements using an iterator
// we can use iterators to access a list element at a specified position.
// For example
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
    // create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();
    // increment itr to point to the 2nd element
    ++itr;
    // display the 2nd element
    cout << "Second Element: " << *itr << endl;
    // increment itr to point to the 4th element
    ++itr;
    ++itr;
    // display the 4th element
    cout << "Fourth element: " << *itr;
    return 0;
}