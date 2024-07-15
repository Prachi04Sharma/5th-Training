#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v (5,1);
    //means size is 5 and all five default value is 1
    cout<<"print all element"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}