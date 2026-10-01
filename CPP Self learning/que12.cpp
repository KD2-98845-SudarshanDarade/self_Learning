#include<iostream>
using namespace std;

class Product{
    string title;
    int price;

    public: 
    Product():title(""),price(0){}
    Product(string title, int price):title(title), price(price){}

    virtual void accept(){
        cout<<"Title : ";
        cin>>title;

        cout<<"Price : ";
        cin>>price;
    }

    virtual void display(){
        cout<<"Title is : "<<endl;
        cout<<"Price : "<<endl;
    }

};


class Book: public Product{
    private:
    int page;

    public:

    Book():page(0){}
    Book(int page):page(page){}

    void accept() override{
        Product::accept();
        cout<<"No Of Page : ";
        cin>>page;
    }

    void display(){
        // Product::display();
        cout<<"Page Count : "<<page<<endl;

    }
};


class Tape: public Product{
    private:
    int playTime;

    public:

    Tape():playTime(0){}
    Tape(int playTime):playTime(playTime){}

    void accept() override{
        Product::accept();
        cout<<"Play Time : ";
        cin>>playTime;
    }

    void display(){
        // Product::display();
        cout<<"Play Time : "<<playTime<<endl;

    }
};

int choice(){
    int ch;
    cout<<"0. Exit!!"<<endl;
    cout<<"1. Book"<<endl;
    cout<<"2. Tape"<<endl;
    cout<<"Enter the choice : ";
    cin>>ch;
    return ch;
}

int main(){

    int n;
    cout<<"How Many Product you want to insert : ";
    cin>>n;
    Product **arr = new Product*[n];

    for(int i = 0; i<n; i++){
        int ch;
        ch = choice();
        switch(ch){
            case 1:{
                arr[i] = new Book;
                arr[i]->accept();
                break;
            }
            
            case 2:{
                arr[i] = new Tape;
                arr[i]->accept();
                break;
            }
        }
    }

    cout<<"\nOnly Page and Playtime"<<endl;
    for(int i = 0; i<n ; i++){
        // arr[i].
        arr[i]->display();
    }

}