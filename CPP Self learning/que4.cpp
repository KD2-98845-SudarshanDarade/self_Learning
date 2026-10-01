#include<iostream>
using namespace std;

class Laptop{
    private:
    int brandId;
    int price;
    public: 

    Laptop():brandId(1),price(50000){
        cout<<"Laptop Cunstructor is called... "<<endl;
    }
    void display(){
        cout<<"Brand Id : "<<brandId<<endl;
        cout<<"Laptop Price  : "<<price<<endl;
    }

    ~Laptop(){
        cout<<"Laptop Destructor Called.."<<endl;
    }
};
int main(){
    Laptop a;
    a.display();
}