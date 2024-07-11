#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum = num1 + num2;
    cout << "Sum of num1 and num2: " << sum<<"\n";
}
int add(int num1 ,int num2,int num3){
    int sum = num1 + num2 + num3;
    cout<< "Sum of num1, num2 and num3: " << sum<<"\n";
    
}
int main(){
    add(2, 4);
    add(8,2,3);
    return 0;
}