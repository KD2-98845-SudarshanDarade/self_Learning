#include<iostream>
using namespace std;

class Student{
    int rollNo;
    int marks;
    static int high;

    public:

    Student():rollNo(0),marks(0){}

    Student(int rollNo, int marks): rollNo(rollNo), marks(marks){
        if(Student::high<this->marks){
            Student::high = this->marks;
        }
    }

    void setRollNum(int rollNo, int marks){
        
        this->rollNo = rollNo;
        this->marks = marks;

        if(Student::high<this->marks){
            Student::high = this->marks;
        }
    }

    void Display(){
        cout<<"RollNo : "<<rollNo<<endl;
        cout<<"marks : "<<marks<<endl;
    }
    
    static int highMarks(){
        cout<<"high is :";
        return high;
    }

       
};
int Student :: high =0;
int main(){
    int n;

    cout<<"Enter the Num of Student : ";
    cin>>n;

    Student *arr;
    arr = new Student[n];
    for(int i = 1; i<=n; i++){
       cout<<"Enter the roll Num and marks for Stundet "<<i<<" : "<<endl;
        int roll;
        cout<<"rollNum : ";
        cin>>roll;
        int mark;
        cout<<"Marks : ";
        cin>>mark;
        arr[i].setRollNum(roll,mark);
    }

     for(int i = 1; i<=n; i++){
        cout<<"Data Of student "<<i<<endl;
        arr[i].Display();
    }

     cout<<Student::highMarks();


    delete[] arr;
    arr= NULL;  
    return 0;
}