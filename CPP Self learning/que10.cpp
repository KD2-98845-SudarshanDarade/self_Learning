// Implement a `Matrix` class and overload `+`, `-`, and `*` operators.
#include<iostream>
using namespace std;
class Matrix{
    int x;
    int y;
    public:
    Matrix():x(0),y(0){}
    Matrix(int x, int y):x(x), y(y){}

    void getPoints(){
        cout<<"X : "<<this->x<<endl;
        cout<<"Y : "<<this->y<<endl;
        cout<<endl;
    }
    friend Matrix operator+(Matrix c1, Matrix c2);
    friend Matrix operator-(Matrix c1, Matrix c2);
    friend Matrix operator*(Matrix c7, Matrix c8);
    
};

Matrix operator+(Matrix c1, Matrix c2){
        Matrix temp;
        temp.x = c1.x + c2.x;
        temp.y = c1.y + c2.y;
        return temp;
    }
    
Matrix operator-(Matrix c5, Matrix c4){
    Matrix temp ;
    temp.x = c5.x - c4.x;
    temp.y = c5.y - c4.y;
    return temp;
}

Matrix operator*(Matrix c7, Matrix c8){
    Matrix temp ;
    temp.x = c7.x * c8.x;
    temp.y = c7.y * c8.y;
    return temp;
}

int main(){

    // + overloading
    Matrix c1(10,20);
    Matrix c2(30,40);
    Matrix c3 = c1 + c2;
    c3.getPoints();


    // - overloding 
    Matrix c4(10,20);
    Matrix c5(30,40);
    Matrix c6 = c5 - c4;
    c6.getPoints();

    Matrix c7(2,2);
    Matrix c8(3,4);
    Matrix c9 = c7 * c8;
    c9.getPoints();
    return 0;
}