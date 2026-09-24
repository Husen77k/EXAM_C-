#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
   
    Student(string studentName, int rollNum) {
        name = studentName;
        rollNumber = rollNum;
        cout << "Constructor called for: " << name << endl;
    }

    void displayDetails() const {
        cout << "Roll No: " << rollNumber << " | Name: " << name << endl;
    }
};

int main() {
    const int TOTAL_STUDENTS = 3;

    Student* studentArray[TOTAL_STUDENTS] = {
        new Student("Husen Khadki", 13126),
        new Student("Ali Khan", 13127),
        new Student("Ismail Khadki", 13128)
    };

    cout << "\n--- Displaying Student Records ---\n";
    
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        studentArray[i]->displayDetails();
    }

   
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        delete studentArray[i];
    }

    return 0;
}
