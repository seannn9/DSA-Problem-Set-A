#include <iostream>
using namespace std;

string name() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}

string course() {
    string course;
    cout << "Enter your course: ";
    getline(cin, course);
    return course;
    
}

int stdnum() {
    int stdnum;
    cout << "Enter your student number: ";
    cin >> stdnum;
    return stdnum;
}

int main() {
    string stdname = name(), stdcourse = course();
    int stdnumber = stdnum();

    cout << "\n\tStudent Details:\n";
    cout << "Name: " << stdname << endl;
    cout << "Course: " << stdcourse << endl;
    cout << "Student Number: " << stdnumber << endl;
    return 0;
}