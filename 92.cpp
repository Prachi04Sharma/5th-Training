//Static initialization of a 2-D Array
//when the size of the array is known at compile time
//Initialization at the time of declaration
//int arr[3][4] : declares an array with 3 rows and 4 columns
#include<iostream>
using namespace std;
int main(){
//Declaration and initialization of a 2-D Array
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
//Accessing elements
for(int i = 0; i<3; ++i){
    for(int j = 0; j<4;++j){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
return 0;
}