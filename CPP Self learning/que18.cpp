
#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* arr;
    int size;

public:
    // Default constructor
    Array() {
        arr = nullptr;
        size = 0;
    }

    // Parameterized constructor
    Array(int size) {
        this->size = size;
        arr = new T[size];
    }

    // Copy constructor - Deep Copy
    Array(const Array& other) {
        size = other.size;
        arr = new T[size];

        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Assignment operator - Deep Copy
    Array& operator=(const Array& other) {

        if (this != &other) {

            delete[] arr;

            size = other.size;
            arr = new T[size];

            for (int i = 0; i < size; i++) {
                arr[i] = other.arr[i];
            }
        }

        return *this;
    }

    // Subscript operator
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw "Invalid index";
        }

        return arr[index];
    }

    // Display array
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor - prevents memory leakage
    ~Array() {
        delete[] arr;
    }
};


// User-defined data type
class Student {
private:
    int rollNo;
    string name;

public:
    Student() {
        rollNo = 0;
        name = "";
    }

    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
    }

    // Overload << for displaying Student
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "[" << s.rollNo << ", " << s.name << "]";
        return out;
    }
};


int main() {

    // Array of integers
    Array<int> a1(5);

    a1[0] = 10;
    a1[1] = 20;
    a1[2] = 30;
    a1[3] = 40;
    a1[4] = 50;

    a1.display();


    // Array of user-defined data type
    Array<Student> a2(3);

    a2[0] = Student(101, "Sachin");
    a2[1] = Student(102, "Rahul");
    a2[2] = Student(103, "Amit");

    a2.display();


    // Copy constructor
    Array<Student> a3 = a2;

    a3.display();


    // Assignment operator
    Array<Student> a4(2);
    a4 = a2;

    a4.display();

    return 0;
}