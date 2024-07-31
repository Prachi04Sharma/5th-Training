/*return 0: Typically indicates success, especially in the context of the main function in C/C++.
return 1: Typically indicates an error or failure, especially in the context of the main function in C/C++.*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // open a text file for writing
    ofstream my_file("example.txt");
    // check the file for errors
    if(!my_file){
        cout << "Error : unable to open the file." << endl;
        return 1;
    }
    // write multiple lines to the file
    my_file << "Pragu 10" << endl;
    my_file << "Vansh 20" << endl;
    my_file << "Prachi 30" << endl;
    // close the file
    my_file.close();
    return 0;
}