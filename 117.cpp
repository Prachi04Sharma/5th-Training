//PROBLEM: If list is empty then add element to first or else add element to the specified position
//Alt approach
#include<iostream>
#include<list>
using namespace std;
int main(){
    // create a list
    list<int> numbers{1, 2, 3};
    // display the original list
    cout << "Initial list: ";
    for(int number : numbers){
        cout << number << " , ";
    }
    // create an iterator to point to the 1st position
    list<int>::iterator itr = numbers.begin();
    // increment the iterator to point to the 3rd position
    ++itr;
    ++itr;
    // insert 0 at the 3rd position of list
    numbers.insert(itr, 0);
    // display the modified list
    cout << endl << "Final List : ";
    for(int number : numbers){
        cout << number << " , ";
    }
    return 0;
}