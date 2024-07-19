#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> numbers = {1,2,3,4,5};
    //using for_each with a lambda to print each element
    for_each(numbers.begin() , numbers.end(), [](int n){
        cout << n << " ";
    });
    cout << endl;

    return 0;
}