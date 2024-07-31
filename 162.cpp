#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    my_file.close();
    return 0;
}
/*By checking the file
ofstream my_file("example.txt");
//check if the file has been opened propery
if(!my_file){
//print error message
cout << "Error opening the file."<< endl;
//terminate the main() function
return 1;
}*/