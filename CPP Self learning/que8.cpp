#include<iostream>
using namespace std;

class Programmer{
    public:
    Programmer(){
        cout<<"Programmer Contructor"<<endl;
    }
	void work(){
		cout<<"Work of Programmer"<<endl;
	}
};

class Teacher{
    public:
    Teacher(){
        cout<<"Teacher Contructor"<<endl;
    }
	void work(){
		cout<<"Work of Teacher"<<endl;
	}
};

class ProgrammingTeacher : public Programmer, public Teacher{
    public:
	ProgrammingTeacher(){
        cout<<"ProgrammingTeacher Contructor"<<endl;
    }
};

int main(){
	ProgrammingTeacher pt;

    // pt.work();  ProgrammingTeacher::workis ambiguous

   pt.Programmer::work(); // solution to ambiguouse
   pt.Teacher::work();
}
