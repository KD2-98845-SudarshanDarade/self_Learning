#include<iostream>
using namespace std;

class Payment{
    private:

    double amount;
    public:

    virtual void makePayment(double amount)=0;
};

class CreditCard : public Payment{
    public:
    void makePayment(double amount){
        cout<<endl;
        cout<<"Transaction Done in Credit Card Mode : "<<amount<<endl;
        
    }
};

class UPI : public Payment{
    public:
    void makePayment(double amount){
        cout<<endl;
        cout<<"Transaction Done in UPI Mode : "<<amount<<endl;
    }
};

class Cash :  public Payment{
    public:
     void makePayment(double amount){
        cout<<endl;
        cout<<"Transaction Done in Cash : "<<amount<<endl;
    }
};


class FactoryPattern{
    public:
    static Payment* getInstance(int choice){
        Payment *pay = NULL;

        switch(choice){
            case 1:{
                pay = new CreditCard;
                break;
            }

            case 2:{
                pay = new UPI;
                break;
            }

            case 3:{
                pay = new Cash;
                break;
            }

            default:{
                cout<<"Please Enter the valid choice "<<endl;
                break;
            }
        }
        return pay;
    }
};

int choice(){
    int ch;
    cout<<"0. Exit!!"<<endl;
    cout<<"1. Credit Card Payment "<<endl;
    cout<<"2. UPI Payment"<<endl;
    cout<<"3. Cash Payment"<<endl;
    cout<<"Enter Choice : ";
    cin>>ch;
    cout<<endl;
    return ch;
}
int main(){
    int ch;
    while((ch = choice())!=0){
        Payment *pay = FactoryPattern::getInstance(ch);

        if(pay!=NULL){
            int amount;
            cout<<"Enter the Amount : ";
            cin>>amount;
            pay->makePayment(amount);
            cout<<endl;
            delete pay;
            pay = NULL;
        }
    }
}