#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    string accountHolderName;
    int balance;

    public:
    BankAccount():accountNumber(0),accountHolderName(""),balance(0){};
    BankAccount(int accountNumber,string accountHolderName,int balance):accountNumber(accountNumber),accountHolderName(accountHolderName),balance(balance){};


    void deposite(int balance){
        this->balance =this->balance + balance;
    }

    void withdraw(int balance){
        this->balance =this->balance - balance;
    }
    void displayBal(){
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Holder : "<<accountHolderName<<endl;
        cout<<"Account Balance : "<<this->balance<<endl;
    }
};


int main(){
    BankAccount ba(12345,"sachin",10000);
    ba.deposite(1000);
    ba.withdraw(5000);

    ba.displayBal();
}