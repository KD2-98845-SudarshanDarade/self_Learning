
#include <iostream>
#include <memory>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;

        cout << "Student created" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    ~Student() {
        cout << "Student destroyed" << endl;
    }
};

int main() {

    // ------------------------------------------------
    // 1. unique_ptr - Ownership Transfer
    // ------------------------------------------------

    cout << "\n--- unique_ptr ---" << endl;

    unique_ptr<Student> ptr1 =
        make_unique<Student>(101, "Sachin");

    ptr1->display();

    // Transfer ownership from ptr1 to ptr2
    unique_ptr<Student> ptr2 = move(ptr1);

    cout << "Ownership transferred" << endl;

    // ptr1 is now empty
    if (ptr1 == nullptr) {
        cout << "ptr1 is empty" << endl;
    }

    // ptr2 now owns the object
    ptr2->display();


    // ------------------------------------------------
    // 2. shared_ptr - Shared Ownership
    // ------------------------------------------------

    cout << "\n--- shared_ptr ---" << endl;

    shared_ptr<Student> ptr3 =
        make_shared<Student>(102, "Rahul");

    cout << "Reference count: "
         << ptr3.use_count() << endl;

    {
        // ptr4 shares ownership with ptr3
        shared_ptr<Student> ptr4 = ptr3;

        cout << "After creating ptr4: "
             << ptr3.use_count() << endl;

        ptr4->display();
    }

    // ptr4 destroyed, ownership returns to ptr3
    cout << "After ptr4 goes out of scope: "
         << ptr3.use_count() << endl;


    // ------------------------------------------------
    // 3. weak_ptr - Non-owning Reference
    // ------------------------------------------------

    cout << "\n--- weak_ptr ---" << endl;

    shared_ptr<Student> ptr5 =
        make_shared<Student>(103, "Amit");

    weak_ptr<Student> ptr6 = ptr5;

    cout << "shared_ptr count: "
         << ptr5.use_count() << endl;

    // weak_ptr does not increase reference count

    if (!ptr6.expired()) {

        // lock() creates a temporary shared_ptr
        shared_ptr<Student> temp = ptr6.lock();

        if (temp) {
            temp->display();
        }
    }

    cout << "shared_ptr count after weak_ptr: "
         << ptr5.use_count() << endl;

    return 0;
}