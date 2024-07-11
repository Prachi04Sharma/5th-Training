#include<iostream>
using namespace std;
int main(){
    int a[5]= {1,3,5,7,9}; //Declaration of array
   cout<<"Completely initialized int array A : " << endl;
   for(int x : a) // For each loop iterates through elements of the array. Introduced for Array data structure.
   //Read as for x in array a.
cout << x << endl;
cout << endl;
int b[6] = {1, 3, 5}; //Keeping the array incomplete to see what is the outcome result.
cout<< "Partial initialized int array B : " << endl;
for(int y : b) // Shows that for each loop will work according to size of array and not according to number of
// elements initialized in the array.
cout << y << endl;
cout << endl;
float c[6] = {1.2, 2.4, 3.6, 48.54, 99.48, 54.88};
cout<<"Completely initialized float array c : ";
for(float z : c)
cout << z << endl;
float d[6] = {12.6, 82.4, 43.6, 4.54, 77.48, 84.88}; //No need to know the know the type of array.
cout << "Completely initialized float array D with auto : " << endl;
for(auto z : d)
cout << z << endl;
cout << endl;
char e[5] = {'A', 66, 'C', 68, 'E'}; //no need to know the type of array.
cout << "Completely initialized char array E with auto :  " << endl;
for ( auto z : e)
cout << z << endl;
cout << endl;
return 0;
}
