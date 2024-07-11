#include<iostream>
using namespace std;
int main(){
    //to find minimum or maximum element in an array :
    int array[5] = {10, 20, 30, 40, 50};
    int max = -32678;
    for(auto temp : array){
        if(temp > max){ // use if (temp < min) then min = temp with min = INT64_MAX initial for minimum
        max = temp;}
    }
    cout << "Max element is : " << max;
}