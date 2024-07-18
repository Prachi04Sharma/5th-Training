//example of how set, a datatype doesn't take repetitive values
//:: scope resolution operator is the operator used to define a function outside of class.
#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for(auto i :s){
        cout <<i <<endl;//0,1,5,6
    }cout<<endl;
    set<int> :: iterator it =s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
}

