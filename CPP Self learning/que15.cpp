#include<iostream>
using namespace std;

class InvalidMarks{
    private:
    string message;

    public:
    InvalidMarks():message(""){}
    InvalidMarks(string message): message(message){}

    void setMessage(string message){
        this->message = message;
    }

    string getMessage(){
        return this->message;
    }
};


namespace college{
    class Student{
        private:
        int age;
        string name;
        double marks;
        public:

        Student(void):age(0),name(""),marks(0){}

        Student(int age, string name, double marks){
            this->age = age;
            this->name = name;
            if(marks<0) throw InvalidMarks("Please Enter Valid Marks...");
            else this->marks = marks;
        }

        void setStudent(int age, string name, double marks){
            this->name = name;
            this->age = age;
            if(marks<0) throw InvalidMarks("Please Enter Valid Marks...");
            else this->marks = marks;
        }

        void getstudent(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Marks : "<<marks<<endl;
        }

    };

    class Teacher{
         private:
        int age;
        string name;
        public:

        Teacher(void):age(0),name(""){}

        Teacher(int age, string name):age(age),name(name){}

        void setStudent(int age, string name){
            this->name = name;
            this->age = age;
        }

        void getstudent(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
    };
}

int main(){
    using namespace college;
    try{
    Student s;
    s.setStudent(10, "sachin",10);
    s.getstudent();

    Teacher t;
    t.setStudent(10, "sachin");
    t.getstudent();
    }
    catch(InvalidMarks e1){
        cout<<e1.getMessage()<<endl;
    }

}