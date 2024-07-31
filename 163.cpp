//Alternate approach
//using is_open() returns
//TRUE - if file is opened successfully
//FALSE - if file isnot opened successfully or is in state of error
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    if(!my_file.is_open()){
        cout<<"Unable to open file"<<endl;
    }
    else{
        cout<<"File opened successfully"<<endl;
    }
    return 0;
}