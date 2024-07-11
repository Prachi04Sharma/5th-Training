// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user:
//  Number of classes held
//  Number of classes attended.
// And print:
//  percentage of class attended
//  Is student is allowed to sit in exam or not.
#include <iostream>
using namespace std;
int main() {
    int classesHeld, classesAttended;
    
    // Taking input from user
    cout << "Enter the number of classes held: ";
    cin >> classesHeld;
    
    cout << "Enter the number of classes attended: ";
    cin >> classesAttended;
    
    // Calculating attendance percentage
    float attendancePercentage = (static_cast<float>(classesAttended) / classesHeld) * 100;
    
    // Displaying the attendance percentage
    cout << "Percentage of classes attended: " << attendancePercentage << "%" << endl;
    
    // Checking if the student is allowed to sit in the exam
    if (attendancePercentage >= 75.0) {
        cout << "The student is allowed to sit in the exam." << std::endl;
    } else {
        cout << "The student is not allowed to sit in the exam." << std::endl;
    }
    
    return 0;
}