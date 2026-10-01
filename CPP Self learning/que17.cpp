#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

class Student{
    private:
    string name;
    int rollNum ;
    int marks;

    public:
    Student():name(""),rollNum(0),marks(0){}
    Student(string name, int rollNum, int marks): name(name), rollNum(rollNum), marks(marks){}

    void setName(string name){
        this->name = name;
    }

    void setRollNum(int rollNum){
        this->rollNum = rollNum;
    }

    void setMarks(int marks){
        this->marks = marks;
    }


    string getName(){
        return this->name;
    }

     int getRollNum(){
        return this->rollNum;
    }

     int getMarks(){
        return this->marks;
    }

    void accept(){
        cout<<"Name : ";
        cin>>name;

        cout<<"Marks : ";
        cin>>marks;

        cout<<"Roll Number : ";
        cin>>rollNum;
    }
};

void write(){
    ofstream fout("student.txt",ios::app); // at the place of fout give any name
    Student s;
    s.accept();
    fout<<"Name : "<<s.getName()<<", Marks : "<<s.getMarks()<<", Roll Number : "<<s.getRollNum()<<endl;
}

int main(){
    write();
    return 0;
}