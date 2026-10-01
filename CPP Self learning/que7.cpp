#include<iostream>
using namespace std;

namespace college{
    class Student{
        private:
        int age;
        string name;
        public:

        Student(void):age(0),name(""){}

        Student(int age, string name):age(age),name(name){}

        void setStudent(int age, string name){
            this->name = name;
            this->age = age;
        }

        void getstudent(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
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
    Student s;
    s.setStudent(10, "sachin");
    s.getstudent();

    Teacher t;
    t.setStudent(10, "sachin");
    s.getstudent();

}