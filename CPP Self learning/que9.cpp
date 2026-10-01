#include<iostream>
using namespace std;

class Person{
    private: 
    string name;
    int age;
    public:
    Person():name(""),age(0){
        
    }

    Person(string name, int age):name(name),age(age){
        
    }

     virtual void work(){
        
        cout<<"Person is working.."<<endl;
    }

	void Display(){
		cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
	}
};


class Student : public Person{
    private:
    int marks;
    public:
	Student(){
        cout<<"student Contructor"<<endl;
    }

    void study(){
        cout<<"Study SelfLearning question..."<<endl;
    }

     void work(){
        cout<<"Student is Working...."<<endl;
    }
};

class Teacher : public Person{
    private:
    int salary;
    public:
    Teacher():salary(0){
        cout<<"teacher constructor"<<endl;
    }

    Teacher(int salary):salary(salary){
        
    }

    void teach(){
        cout<<"Teaching...."<<endl;
    }

    void work(){
        cout<<"Teacher is Working...."<<endl;
    }
	
};

class Factory{

    public:
    static Person* getInstance(int choice){
        Person *person = NULL;
        switch (choice)
        {
        case 1:{
            person = new Student();
            break;
        }

        case 2:{
            person = new Teacher();
            break;
        }
        
        default:
        cout<<"Valid argument..."<<endl;
            break;
        }
        return person;
    }
};

int choice(){
    int ch;
    cout<<"0. Exit!!"<<endl;
    cout<<"1. TO call student work"<<endl;
    cout<<"2. TO call Teacher work"<<endl;
    cout<<"Enter Choice : ";
    cin>>ch;
    return ch;
}

int main(){
	int ch;
    while((ch = choice())!=0){
        Person *person = Factory::getInstance(ch);
        if(person != NULL){
            person->work(); // runtime polymorphysm
            delete person;
            person = NULL;
        }
    }
    return 0;
}
