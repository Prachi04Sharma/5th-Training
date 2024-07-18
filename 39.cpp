//wap make a list having string and int values
#include <iostream>
#include <list>
using namespace std;
int main() {
   list<int> myList;


   // Add elements to the list
   myList.push_back(10);
   myList.push_back(20);
   myList.push_back(30);


   // Iterate through the list and print the elements
   for(const auto& item : myList) {
       std::cout << item << std::endl;
   }


   return 0;
}

//conclusion yai ki at a time only one datatype could be used string and int sath nai

