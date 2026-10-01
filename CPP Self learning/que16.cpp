
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student() {
        rollNo = 0;
        name = "";
    }

    void setRollNo(int rollNo) {
        if (rollNo < 0) {
            throw "Invalid Roll Number";
        }
        this->rollNo = rollNo;
    }

    void setName(string name) {
        if (name.empty()) {
            throw "Invalid Name";
        }
        this->name = name;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};


// User-defined Smart Pointer
class SmartPointer {
private:
    Student* ptr;

public:
    // Constructor
    SmartPointer(Student* ptr) {
        this->ptr = ptr;
    }

    // Destructor
    ~SmartPointer() {
        delete ptr;
        cout << "Memory released automatically" << endl;
    }

    // Overload -> operator
    Student* operator->() {
        return ptr;
    }
};


int main() {

    try {

        SmartPointer s(new Student);

        // If exception occurs here,
        // SmartPointer destructor will still execute

        s->setRollNo(101);
        s->setName("Sachin");

        s->display();
    }
    catch (...) {
        cout << "Invalid input" << endl;
    }

    return 0;
}