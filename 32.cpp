#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(12);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list "<<l.size()<<endl;

}
