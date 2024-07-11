#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
   for(int i = a;i<=b; i++){
    if(i>=1 && i<=b){
        switch(i){
            case 1:
            cout<< "one" << endl;
            break;
            case 2:
            cout << "two" << endl;
            break;
            case 3:
            cout<< "three" << endl;
            break;
            case 4:
            cout<<"four" << endl;
            break;
            case 5:
            cout<<"five"<<endl;
            break;
            cout << "six"<<endl;
            break;
            cout<< "seven"<<endl;
            break;
            cout<<"eight"<<endl;
            break;
            cout<<"nine"<<endl;
            break;
        }
    }
    else{
        if(i%2 == 0){
            cout << "even" << endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
   }
}