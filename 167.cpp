//Append multiple lines to the file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Open a text file for appending
    ofstream my_file("example.txt", ios::app);
    // if the file doesn't open successfully, print an error message
    if(!my_file){
        cout<< "Failed to open the file for appending." << endl;
        return 1;
    }
    //append multiple line sto the file
    my_file << "Lomash 10" << endl;
    my_file << "Hoon 20" << endl;
    my_file << "Warikoo 30" << endl;
    //close the file 
    my_file.close();
    return 0;
}