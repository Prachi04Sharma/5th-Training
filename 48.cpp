//OOPS begin
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // getter and setter methods
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
    //Teacher(){
    //cout<<"Constructor is calling" << endl;
    //}
    void getInfo()
    {
    cout << "Teacher name: " << name << endl;
    cout << "Teacher Subject: " << subject << endl;
    }
};
int main()
{
    Teacher t1;
    t1.name = "Sarang";
    t1.subject = "Math";
    t1.changeDept("CSE");
    cout << t1.name << endl;
    t1.getInfo();
    t1.setSalary(10000);
    cout << t1.getSalary() << endl;
    // t1.setSalary(4500);
    // cout<<t1.setSalary();
}